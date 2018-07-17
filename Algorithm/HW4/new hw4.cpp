#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

struct node_table{
	int node_id;
	int a;
};
static int size = 0;
vector<node_table> nt;

int find_depth(int parent)
{
  int depth = 0;
  int parent_id = nt[parent].a;

  for (int i = 0; i < size; i++) {
    if (parent_id == nt[i].node_id) {
      depth = find_depth(i) + 1;
      break;
    }
  }
  return depth;
}

int main(void){
	int m;
	int r,v;
	int id;
	scanf("%d",&m);
	while(1){
	switch(m){
	case 'M':
		{
		scanf("%d",id);
		node_table node;
		node.node_id = id;
		nt.push_back(node);
		break;
		}
	case 'F':
		{
		scanf("%d",&id);
		size = nt.size();
		int parent = 0;
		for (int i = 0; i < size; i++) {
        	if (nt[i].node_id == id) {
       			parent = i;
        		break;
        	}
      	}
		 printf("%d %d\n",id,find_depth(parent));		
		break;
	}
	case 'G':
		{
		scanf("%d %d",&r,&v);
		size = nt.size();
	
		  for (int i = 0; i < size; i++) {
    		if (nt[i].node_id == r)
   			 {
     			 nt[i].a = v;
     			 break;
   			 }
  		}
		
		break;
	}
	case 'E':
		return 0;
	}
	} 
}
