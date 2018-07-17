#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// is_connected[a][b] means a is connected to b
char is_connected[10001][10001];
// prob[a][b] means probability from a to b
double prob[10001][10001];
// best_prob[a] means best probability to a
double best_prob[10001];
// visited[a] means V[a] has been visited
char visited[10001];
// path[a] means previous vertex of V[a] is path[a]
int path[10001];

typedef struct {
    int cap;
    int head;
    int count;
    int data[0];
} QUEUE;

QUEUE* Q_create(int cap)
{
    QUEUE *queue = (QUEUE*)malloc(sizeof(QUEUE) + sizeof(int) * cap);
    queue->cap = cap;
    queue->head = 0;
    queue->count = 0;
    return queue;
}

void Q_free(QUEUE *queue)
{
    free(queue);
}

int Q_count(QUEUE *queue)
{
    return queue->count;
}

int Q_enqueue(QUEUE *queue, int data)
{
    if(queue->count >= queue->cap) {
        return 0;
    }
    queue->data[(queue->head + queue->count++) % queue->cap] = data;
    return 1;
}

int Q_deque(QUEUE *queue)
{
    if(queue->count > 0) {
        int r = queue->data[queue->head++ % queue->cap];
        queue->count--;
        queue->head %= queue->cap;
        return r;
    } else {
        return 0xdeadbeef;
    }
}

int Q_data(QUEUE *queue, int offset)
{
    if(offset < queue->count) {
        return queue->data[(queue->head + offset) % queue->cap];
    } else {
        return 0xdeadbeef;
    }
}

void trace_path(int c)
{
    int t = -1, n;

    // reverse linked list
    while (c != -1) {
        n = path[c];
        path[c] = t;
        t = c;
        c = n;
    }

    // follow the linked list and output path
    c = from;
    while(path[c] != -1)
    {
        printf("%d %d\n", c, path[c]);
        c = path[c];
    }
}

// Vertex count, Edge count, start vertex, target vertex
int V, E, from, to;
void solve()
{
    int i, current_v;
    QUEUE *queue = Q_create(0x1000000); // takes about 64MB of memory

    // initialize first vertex
    visited[from] = 1;
    path[from] = -1;
    best_prob[from] = 1.0;
    Q_enqueue(queue, from);

    // BFS algorithm
    while(Q_count(queue) > 0) {
        current_v = Q_deque(queue);
        for(i = 0; i < V; i++) {
            // test if V[i] is connected from V[current_v]
            if(is_connected[current_v][i]) {
                // i is the vertex which connected from V[current_v]
                if(!visited[i] || best_prob[i] < prob[current_v][i] * best_prob[current_v]) {
                    // update best probability
                    best_prob[i] = prob[current_v][i] * best_prob[current_v];
                    // set visited flag
                    visited[i] = 1;
                    // update path data
                    path[i] = current_v;
                    Q_enqueue(queue, i);
                }
            }
        }
    }

    // inverse path output path
    trace_path(to);
    printf("%g\n", best_prob[to]);

    // destory queue
    Q_free(queue);
}

// initialize all data structure
void init()
{
    memset(is_connected, 0, sizeof is_connected);
    memset(prob, 0, sizeof prob);
    memset(visited, 0, sizeof visited);
    memset(best_prob, 0, sizeof best_prob);
    memset(path, 0, sizeof path);
}

int main()
{
    // redirect input.txt to standard input
    freopen("input.txt", "r", stdin);

    int N, i, a, b;
    double p;

    scanf("%d", &N);

    while(N-- > 0) {
        init();
        scanf("%d%d", &V, &E);

        for(i = 0; i < E; i++) {
            scanf("%d%d%lf", &a, &b, &p);

            // take the better one edge
            if(!is_connected[a][b] || prob[a][b] < p) {
                is_connected[a][b] = 1;
                prob[a][b] = p;
            }
        }

        scanf("%d%d", &from, &to);

        solve();
    }
}
