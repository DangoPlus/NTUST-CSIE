#include <iostream>
#include <list>
#include <string>
#include <new>
#include <cstdlib>
#include <cstring>

using namespace std;

struct edge;

struct vertex
{
    string name;
    char color;
    struct vertex *p;
    int d, f;
    struct edge *e;
};

struct edge
{
    struct vertex *v;
    struct edge *next;
};

class Vertices
{
    private:
        vertex *va;
        int num_vertices;
    
    public:
        Vertices(int num_vertices)
        {
            this->num_vertices = num_vertices;
            try
            {
                va = new vertex[num_vertices];
            }
            catch(std::bad_alloc xa)
            {
                cout << "Memory allocation failure" << endl;
                exit(EXIT_FAILURE);
            }
        }
        
        ~Vertices()
        {
            delete[] va;
        }
        
        void acceptVertices()
        {
            string temp;
            for(int i=0; i<num_vertices; ++i)
            {
                cout << "Enter name of vertex " << i+1 << ": ";
                getline(cin, temp);
                va[i].name.assign(temp);
                va[i].e = NULL;
            }
            reset_graph();
        }
        
        void reset_graph()
        {
            for(int i=0; i<num_vertices; ++i)
            {
                va[i].color = 'w';
                va[i].d = va[i].f = 0;
                va[i].p = NULL;
            }
        }
        
        void printVertices()
        {
            edge *e = NULL;
            for(int i=0; i<num_vertices; ++i)
            {
                cout << va[i].name << " --> ";
                e = va[i].e;
                while(e != NULL)
                {
                    cout << "  " << e->v->name << "  ";
                    e = e->next;
                }
                cout << endl;
            }
        }
        
        void acceptEdges()
        {
            string n;
            int index;
            for(int i=0; i<num_vertices; ++i)
            {
                cout << "Enter all edges from " << va[i].name << " (-1 to stop)" << endl;
                while(1)
                {
                    getline(cin, n);
                    if(!n.compare("-1"))
                        break;
                    index = findVertex(n);
                    if(index == -1)
                    {
                        cout << "Vertex " << n << " does not exist. Try again." << endl;
                        continue;
                    }
                    addEdge(i, index);
                }
            }
        }
        
        int findVertex(string n)
        {
            for(int i=0; i<num_vertices; ++i)
                if(!va[i].name.compare(n))
                    return i;
            return -1;
        }
        
        void addEdge(int origin, int dest)
        {
            edge *e = new edge;
            e->v = &va[dest];
            if(va[origin].e == NULL)
            {
                e->next = NULL;
                va[origin].e = e;
            }
            else
            {
                e->next = va[origin].e;
                va[origin].e = e;
            }
        }
        
        bool isSinglyConnected()
        {
            int time = 0;
            for(int i=0; i<num_vertices; ++i)
            {
                reset_graph();
                if(!dfsVisit(&va[i], time))
                    return false;
            }
            return true;
        }
        
        bool dfsVisit(vertex *u, int &time)
        {
            u->color = 'g';
            u->d = ++time;
            edge *e = u->e;
            bool conn = true;
            while(e != NULL)
            {
                if(e->v->color == 'w')
                {
                    e->v->p = u;
                    conn = dfsVisit(e->v, time);
                }
                else if(e->v->color == 'b')
                {
                    cout << "Wrong edge from " << u->name << " to " << e->v->name << endl;
                    return false;
                }
                e = e->next;
            }
            u->f = ++time;
            u->color = 'b';
            return conn;
        }
};

int main()
{
    int num_v;
    cout << "Enter number of vertices: ";
    cin >> num_v;
    cin.ignore();
    Vertices vertices(num_v);
    vertices.acceptVertices();
    vertices.acceptEdges();
    if(vertices.isSinglyConnected() == true)
        cout << "Graph is singly connected" << endl;
    else
        cout << "Graph is not singly connected" << endl;
    return 1;
}
