#include <iostream>
#include <stdlib.h>
#define MAX 1000
using namespace std;

typedef struct node{
	int n;
	struct node *parent;
}node;

node *NodeTable[MAX];

int main(int argc, char const *argv[])
{
	char mode;
	int v, r, depth;
	while(true){
		cin >> mode;
		switch (mode){
			case 'M':
				cin >> v;
				NodeTable[v] = new node();
				NodeTable[v]->n = v;
				NodeTable[v]->parent = NULL;
                break;
			case 'F':
				cin >> v;
                node *pt;
                pt = NodeTable[v];
				depth = 0;
				while(pt->parent != NULL){
					depth++;
					pt = pt->parent;
				}
				cout << v << " " << depth << endl;
                break;
			case 'G':
				cin >> r;
				cin >> v;
				NodeTable[r]->parent = NodeTable[v];
                break;
			case 'E':
                exit(0);
                break;
		}
	}
	return 0;
}
