#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

typedef struct node_table{
  struct node_table *p;
  int a;
}node_table;
node_table *nt[9999];

void make_tree(int v){
	
	nt[v] = new node_table();
	nt[v]->a = v;
	nt[v]->p = NULL;
}
void graft(int r, int v){
	nt[r]->p = nt[v];
}
void find_depth(int v){
	int depth;
	depth = 0;
  	node_table *f;
  	f = nt[v];
  	while(f->p != NULL){
  		depth = depth + 1;
  		f = f->p;
	  }
  	printf("%d %d\n",v,depth);
}

int main(void){
	char s;
	int v,r;
	while( 1 > 0){
		scanf("%s",&s);
		switch(s){
	case 'M':
		scanf("%d",&v);
		make_tree(v);
		break;
	case 'F':
		scanf("%d",&v);
		find_depth(v);
		break;
	case 'G':
		scanf("%d %d",&r,&v);
		graft(r,v);
		break;
	case 'E':
		exit(0);
		break;
	}
	} 
	return 0;
}
