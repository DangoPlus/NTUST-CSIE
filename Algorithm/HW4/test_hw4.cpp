#include <iostream>
#include <stdlib.h> 
using namespace std;
struct nodetable{
	int parent;
	int n;
	int pt;
}node; 

node *nodes[1000];
int main(void){
	char k;
	int v;
	int r;
	int depth;
	while(true){
		cin >> k;
		switch (k){
			case 'M':
				cin >> v;
				nodes[v] = new node();
				nodes[v]->n = v;
				nodes[v]->parent = NULL;
				break;
			case 'F':
				cin >> v;
				node *pt;
				pt = nodes[v];
				depth = 0;
				while(pt->parent!=NULL){
					depth++;
					pt = pt->parent;
					cout<<v<<" "<<depth<<endl;
				}
				break;
			case 'G':
				cin >> r;
				cin >> v;
				nodes[r]->parent = nodes[v];
				break;
			case 'E':
				return 0;
		}
	}
	return 0;
}
