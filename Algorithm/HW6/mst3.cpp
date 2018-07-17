/*
 Created by Sahar Kausar (Fall 2015 COP3530 - Data Structures with C++)
 Please do not copy or redistribute without permission.
 
 Assignment: Minimum Spanning Trees
 */

/**
 What the program does:
 
 For a weighted, connected, undirected graph, a Spanning Tree is a sub-graph that includes all the vertices of the original graph, and is also a tree. A Minimum-Cost Spanning Tree is a spanning tree with the smallest sum of its edges¡¯ costs. Uses of Minimum-Cost Spanning Trees range from Taxonomy to Clustering analysis.
 In this assignment, the following is implemented: Kruskal¡¯s, Boruvka¡¯s (Sollin¡¯s) , and Prim¡¯s algorithms to produce Minimum-Cost Spanning Trees from an undirected graph. The implemented Kruskal¡¯s algorithm is done without the Union-Find operation.
 
 
 Example Run:
 
 OUTPUT>> Enter number of Node and Edges(s): 
 USER INPUT>> 4 5
 
 OUTPUT>> Enter Node A and Node B and Undirected Edge Weight(s):
 USER INPUT>> 0 1 5
 USER INPUT>> 1 3 4
 USER INPUT>> 3 2 2
 USER INPUT>> 2 0 7
 USER INPUT>> 1 2 10
 
 OUTPUT>> Enter the start Node:
 USER INPUT>> 0
 
 OUTPUT>> Prim's MST:
 OUTPUT>> (0, 1)
 OUTPUT>> (1, 3)
 OUTPUT>> (2, 3)
 OUTPUT>> Total Weight:
 OUTPUT>> 11
 
 OUTPUT>> Kruskal's MST:
 OUTPUT>> (2, 3)
 OUTPUT>> (1, 3)
 OUTPUT>> (0, 1)
 OUTPUT>> Total Weight:
 OUTPUT>> 11
 
 OUTPUT>> Boruvka¡¯s MST:
 OUTPUT>> (0, 1)
 OUTPUT>> (2, 3)
 OUTPUT>> (1, 3)
 OUTPUT>> Total Weight:
 OUTPUT>> 11
 
 Note: Edge(s) are undirected and weighted.
 
 
 **/

/**
 How to Compile and Execute:
 
 Download the file to your desired root folder on your computer. Open the terminal or executable IDE program to compile and run the file. Enter the following in the quotes (make sure to omit the quotes): "g++ -o (desiredNameOfFile) MST.cpp"
 
 For example, you may enter the following: "g++ -o MST MST.cpp"
 
 The program will then compile. Run the program by typing "./(desiredNameOfFile)"
 
 In the above example, you may have entered: "./MST"
 
 The program will then run and the user may follow the prompt. Enjoy!
 
 **/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


template<class T>
class Prim {
private:
	int numberOfNodes; //Total number of nodes in tree
	int totalWeight = 0; //Total Weight of tree traversal

	//Vector that will contrain tree values
	//Size based on numberOfVertices and numberOfEdges
	vector< vector<int> > tree;

	//Store traversed tree items
	vector<int> traversed;
	vector<int> traversedSrc;

	//Get node with minimum cost
	int minKey(vector<int> traversed);



public:
	Prim(int nodes); //Constructor
	void fillTree(int nodeA, int nodeB, int weight); //Insert weight values into graph
	void printTree(); // Print the current graph
	void solveTree(int startNode); //Use Prim's algorithm to find MST
	~Prim(); //Destructor
};

//Constructor
template<class T>
Prim<T>::Prim(int nodes) {

	numberOfNodes = nodes;

	//Instantiate Tree based on input and fill with zeros

	//Assign dimensions
	//Number of rows equal to numberOfNodes
	//row_size is the same as numerOfNodes

	for (int numRows = 0; numRows < nodes; numRows++)
	{
		vector<int> row(nodes);
		tree.push_back(row);
	}

	//Fill all postions with -1
	for (int numRows = 0; numRows < numberOfNodes; numRows++)
	{
		for (int numCol = 0; numCol < numberOfNodes; numCol++)
		{
			tree[numRows][numCol] = -1;
		}
	}


}

template<class T>
void Prim<T>::fillTree(int nodeA, int nodeB, int weight)
{
	//Update possition with weight. Need to reflect for both directions (0,1 input also fills 1,0)
	tree[nodeA][nodeB] = weight;
	tree[nodeB][nodeA] = weight;
}

template<class T>
void Prim<T>::printTree()
{
	cout << endl;

	for (int numRows = 0; numRows < numberOfNodes; numRows++)
	{
		for (int numCol = 0; numCol < numberOfNodes; numCol++)
		{
			cout << tree[numRows][numCol] << ' ';
		}

		cout << endl;
	}

	cout << endl;
}

template<class T>
int Prim<T>::minKey(vector<int> traversed)
{
	int tempCost = -1;
	int cost = INT_MAX;
	int minKey;

	int tIndex = 0;

	//Find next lowest cost edge
	//Iterate through all keys already picked to see if any adjacent key is lowest
	for (unsigned int size = 0; size < traversed.size(); size++)
	{
		int node = traversed[size];

		for (int numCol = 0; numCol < numberOfNodes; numCol++)
		{
			tempCost = tree[node][numCol];

			if (tempCost >= 0 && tempCost < cost)
			{
				//Check if key chosen was already traversed
				//If yes skip to avoid any repeats/conflicts
				if (!(find(traversed.begin(), traversed.end(), numCol) != traversed.end()))
				{
					cost = tempCost;
					minKey = numCol;
					tIndex = node;
				}
			}
		}
	}


	traversedSrc.push_back(tIndex);
	totalWeight += cost;

	return minKey;

}

template<class T>
void Prim<T>::solveTree(int startNode)
{
	traversed.push_back(startNode);

	int nextKey = startNode;


	for (int count = 0; count < numberOfNodes - 1; count++)
	{
		nextKey = minKey(traversed);
		traversed.push_back(nextKey);
	}

	//Print out the traversed items
	cout << endl;
	cout << "Prim's MST" << endl;

	for (unsigned int i = 0; i < traversed.size(); i++)
	{
		//Avoid going out of range
		unsigned int nextIndex = i + 1;
		if (nextIndex < traversed.size())
		{
			int nodeA = traversedSrc[i];
			int nodeB = traversed[i + 1];

			if (nodeA < nodeB)
			{
				cout << "(" << nodeA << ", " << nodeB << ")" << endl;
			}
			else {
				cout << "(" << nodeB << ", " << nodeA << ")" << endl;
			}
		}
	}

	//Print out the total weight
	cout << "Total Weight:\n" << totalWeight << endl;
	cout << endl;
}

//Destructor
template<class T>
Prim<T>::~Prim() {

}


//**********************************************************************************************
//**********************************************************************************************
//**********************************************************************************************

//Stores nodeA, nodeB, and weight for each input
class EdgeData {
public:
	int nodeA;
	int nodeB;
	int weight;
};

template<class T>
class Kruskal {
private:
	int numberOfNodes; //Total number of nodes in tree
	int numberOfEdges; //Total number of edges in tree
	int totalWeight = 0; //Total Weight of tree traversal

	int totalEdgeLen = 0; //Total number of edges that will be traverserd (numberOfNodes - 1)

	//Store traversed tree items
	vector<EdgeData> traversed;

	//Store all edges
	vector<EdgeData> edges;

	//Sort all edges by ascending weight
	void sortEdges();
	vector<EdgeData> sortedEdges;

	//Find next edge
	int nextEdge(int treeIndex);
	bool isCycle(EdgeData edge);
	bool srcCheck(vector<EdgeData> nodeAPairs);
	bool destCheck(vector<EdgeData> nodeBPairs);


public:
	Kruskal(int nodes, int edgeCount); //Constructor	
	void addEdge(int nodeA, int nodeB, int weight); //Add edge to vector
	void printEges(); //Print all stored edges
	void solveTree(); //Solve tree with Kruskal's algorithm
	~Kruskal(); //Destructor
};

template<class T>
void Kruskal<T>::sortEdges() {

	int edgeSize = 0;
	sortedEdges = edges;
	edgeSize = sortedEdges.size();
	sort(sortedEdges.begin(), sortedEdges.end());
}

template<class T>
int Kruskal<T>::nextEdge(int treeIndex) {

	bool loop = false;
	int nextIndex = treeIndex + 1;

	do
	{
		EdgeData nextLoc = sortedEdges[nextIndex];

		//Check to see if this location causes a cycle
		bool cycle = isCycle(nextLoc);

		if (cycle == true)
		{
			//If it does set cycle to true and increment nextIndex
			nextIndex++;
			loop = true;
		}
		else {
			loop = false;
		}

	} while (loop == true);

	//If nextIndex does not cause a cycle retun the index
	return nextIndex;
}

template<class T>
bool Kruskal<T>::isCycle(EdgeData edge) {

	//Compare variables
	int src = edge.nodeA;
	int dest = edge.nodeB;

	vector<EdgeData> nodeAPairs;
	vector<EdgeData> nodeBPairs;

	//Compare return variables;
	bool srcCycle = true;
	bool destCycle = true;

	bool cycle = true;


	for (unsigned int numNode = 0; numNode < traversed.size(); numNode++)
	{
		//Check if src node has been traversed
		if (edge.nodeA != traversed[numNode].nodeA)
		{
			//If it hasn't set cycle to false and break out to for loop for next iteration
			cycle = false;
		}
		else if (edge.nodeA == traversed[numNode].nodeA) {
			//src has been traversed. Check dest to see if dest has been traversed

			for (unsigned int numNode = 0; numNode < traversed.size(); numNode++)
			{
				//Check if dest node has been traversed
				if (edge.nodeB != traversed[numNode].nodeA)
				{
					//If it hasn't set cycle to false and break out to for loop for next iteration
					cycle = false;
					break;
				}
				else {
					//If it has been traversed return true
					return true;
				}
			}

			//if (edge.nodeB == traversed[numNode].nodeB)
			//{
			//	cycle = true;
			//}
			//else {
			//	cycle = false;
			//	break;
			//}
		}
	}




	////Get all pairs for src node
	//for (int numNode = 0; numNode < numberOfEdges; numNode++)
	//{
	//	if (edges[numNode].nodeA == src )
	//	{
	//		if (!(edges[numNode].nodeB == dest))
	//		{
	//			nodeAPairs.push_back(edges[numNode]);
	//		}			
	//	}
	//	else if (edges[numNode].nodeB == src) {			
	//		nodeAPairs.push_back(edges[numNode]);
	//	}
	//}

	////Get all pairs for dest node
	//for (int numNode = 0; numNode < numberOfEdges; numNode++)
	//{
	//	if (edges[numNode].nodeA == dest)
	//	{
	//		nodeBPairs.push_back(edges[numNode]);
	//	}
	//	else if (edges[numNode].nodeB == dest) {
	//		
	//		if (!(edges[numNode].nodeA == src))
	//		{
	//			nodeBPairs.push_back(edges[numNode]);
	//		}			
	//	}
	//}

	//Check in traversed if pairs already exist
	//If yes for all pairs then cycle

	//Check src pairs
	//for (int numNode = 0; numNode < nodeAPairs.size(); numNode++)
	//{
	//	for (int travIndex = 0; travIndex < traversed.size(); travIndex++)
	//	{
	//		if (nodeAPairs[numNode].nodeA != traversed[travIndex].nodeA && nodeAPairs[numNode].nodeB != traversed[travIndex].nodeB && nodeAPairs[numNode].weight != traversed[travIndex].weight)
	//		{
	//			srcCycle = false;
	//			break;
	//		}
	//	}
	//}

	//Check dest pairs
	//for (int numNode = 0; numNode < nodeBPairs.size(); numNode++)
	//{
	//	for (int travIndex = 0; travIndex < traversed.size(); travIndex++)
	//	{
	//		if (nodeBPairs[numNode].nodeA != traversed[travIndex].nodeA && nodeBPairs[numNode].nodeB != traversed[travIndex].nodeB && nodeBPairs[numNode].weight != traversed[travIndex].weight)
	//		{
	//			destCycle = false;
	//			break;
	//		}
	//	}
	//}

	//srcCycle = srcCheck(nodeAPairs);
	//destCycle = destCheck(nodeBPairs);

	//if (srcCycle == true)
	//{
	//	cycle = true;
	//}
	//else if (destCycle == true)
	//{
	//	cycle = true;
	//}
	//else {
	//	cycle = false;
	//}

	return cycle;
}

//template<class T>
//bool Kruskal<T>::srcCheck(vector<EdgeData> nodeAPairs) {
//
//	for (unsigned int numNode = 0; numNode < nodeAPairs.size(); numNode++)
//	{
//		for (unsigned int travIndex = 0; travIndex < traversed.size(); travIndex++)
//		{
//			//if (nodeAPairs[numNode].nodeA != traversed[travIndex].nodeA)
//			//{
//			//	return false;				
//			//}
//			//else if (nodeAPairs[numNode].nodeB != traversed[travIndex].nodeB)
//			//{
//			//	return false;
//			//}
//			if (nodeAPairs[numNode].nodeA == traversed[travIndex].nodeA)
//			{
//				if (nodeAPairs[numNode].nodeB == traversed[travIndex].nodeB)
//				{
//					if (numNode < nodeAPairs.size() -1)
//					{
//						return true;
//					}					
//				}
//			}
//		}
//	}
//
//	return false;
//}
//
//template<class T>
//bool Kruskal<T>::destCheck(vector<EdgeData> nodeBPairs) {
//
//	for (unsigned int numNode = 0; numNode < nodeBPairs.size(); numNode++)
//	{
//		for (unsigned int travIndex = 0; travIndex < traversed.size(); travIndex++)
//		{
//			//if (nodeBPairs[numNode].nodeA != traversed[travIndex].nodeA)
//			//{
//			//	return false;				
//			//}
//			//else if (nodeBPairs[numNode].nodeB != traversed[travIndex].nodeB)
//			//{
//			//	return false;
//			//}
//			if (nodeBPairs[numNode].nodeA == traversed[travIndex].nodeA)
//			{
//				if (nodeBPairs[numNode].nodeB == traversed[travIndex].nodeB)
//				{
//					if (numNode < nodeBPairs.size() - 1)
//					{
//						return true;
//					}
//				}
//			}
//		}
//	}
//
//	return false;
//}

template<class T>
Kruskal<T>::Kruskal(int nodes, int edgeCount)
{
	numberOfNodes = nodes;
	numberOfEdges = edgeCount;
	totalEdgeLen = numberOfNodes - 1;
}

template<class T>
void Kruskal<T>::addEdge(int nodeA, int nodeB, int weight) {

	//Add edge to EdgeData vector
	EdgeData edge = EdgeData();

	edge.nodeA = nodeA;
	edge.nodeB = nodeB;
	edge.weight = weight;

	edges.push_back(edge);
}

template<class T>
void Kruskal<T>::printEges() {

	cout << "Kruskal's MST" << endl;
	for (int nodeIndex = 0; nodeIndex < totalEdgeLen; nodeIndex++)
	{
		int nodeA = traversed[nodeIndex].nodeA;
		int nodeB = traversed[nodeIndex].nodeB;

		if (nodeA < nodeB)
		{
			cout << "(" << nodeA << ", " << nodeB << ")" << endl;
		}
		else {
			cout << "(" << nodeB << ", " << nodeA << ")" << endl;
		}
	}
	cout << "Total Weight:\n" << totalWeight << endl;
}

template<class T>
void Kruskal<T>::solveTree() {

	sortEdges();
	int len = 0; //Keep track of the number of edges
	int sEdgeIndex = 0; //Track location in sortedEdge vector

	while (len <= totalEdgeLen)
	{
		//Push first edge if no other values
		if (traversed.size() == 0)
		{
			traversed.push_back(sortedEdges[0]);
			len++;
		}
		else {
			//Find next edge
			int index = nextEdge(sEdgeIndex);
			totalWeight += sortedEdges[sEdgeIndex].weight;
			traversed.push_back(sortedEdges[index]);

			sEdgeIndex = index;
			len++;
		}
	}

	printEges();

}

template<class T>
Kruskal<T>::~Kruskal()
{

}

//Operator overlord to sort kruskal tree
bool operator<(const EdgeData &e1, const EdgeData &e2);

bool operator<(const EdgeData &e1, const EdgeData &e2) {

	if (e1.weight < e2.weight)
	{
		return true;
	}
	else {
		return false;
	}
}

//**********************************************************************************************
//**********************************************************************************************
//**********************************************************************************************

//Stores vector edgeData
class Component{
	vector<EdgeData> componentSubSet;
};

template<class T>
class Sollins{
	int numberOfNodes; //Total number of nodes in tree
	int totalWeight = 0; //Total Weight of tree traversal

	//Vector that will contrain tree values
	//Size based on numberOfVertices and numberOfEdges
	vector< vector<int> > tree;

	//Contains all edges
	vector<EdgeData> edges;

	//Push component vectors
	vector<EdgeData> pushVector;

	//Store traversed tree items
	vector<int> traversed;
	vector<int> traversedSrc;

	vector< vector<EdgeData> > components;
	//Get node with minimum cost
	int findCheapestEdge(int node);
	void GetEdges();
	void CreateComponents();


public:
	Sollins(int nodes); //Constructor
	void fillTree(int nodeA, int nodeB, int weight); //Insert weight values into graph
	void printTree(); // Print the current graph
	void solveTree(); //Use Sollins's algorithm to find MST
	~Sollins(); //Destructor
};

template<class T>
Sollins<T>::Sollins(int nodes){
	numberOfNodes = nodes;

	//Instantiate Tree based on input and fill with zeros

	//Assign dimensions
	//Number of rows equal to numberOfNodes
	//row_size is the same as numerOfNodes

	for (int numRows = 0; numRows < nodes; numRows++)
	{
		vector<int> row(nodes);
		tree.push_back(row);
	}

	//Fill all postions with -1
	for (int numRows = 0; numRows < numberOfNodes; numRows++)
	{
		for (int numCol = 0; numCol < numberOfNodes; numCol++)
		{
			tree[numRows][numCol] = -1;
		}
	}
}

template<class T>
void Sollins<T>::fillTree(int nodeA, int nodeB, int weight)
{
	//EdgeData edgeData;

	//edgeData.nodeA = nodeA;
	//edgeData.nodeB = nodeB;
	//edgeData.weight = weight;

	//edges.push_back(edgeData);

	//Update position with weight. Need to reflect for both directions (0,1 input also fills 1,0)
	tree[nodeA][nodeB] = weight;
	tree[nodeB][nodeA] = weight;
}

template<class T>
void Sollins<T>::printTree()
{
	cout << endl;

	for (int numRows = 0; numRows < numberOfNodes; numRows++)
	{
		for (int numCol = 0; numCol < numberOfNodes; numCol++)
		{
			cout << tree[numRows][numCol] << ' ';
		}

		cout << endl;
	}

	cout << endl;
}

template<class T>
int Sollins<T>::findCheapestEdge(int node){

	int cheapestNode = 0;
	int tempCost = 0;
	int cost = INT_MAX;
	
	for (int i = 0; i < numberOfNodes; i++)
	{
		tempCost = tree[node][i];
		if (tempCost >= 0 && tempCost < cost)
		{
			cost = tempCost;
			cheapestNode = i;
		}
	}

	return cheapestNode;
}

template<class T>
void Sollins<T>::GetEdges(){

	for (int nodeCount = 0; nodeCount < numberOfNodes; nodeCount++)
	{
		int cheapestEdge = findCheapestEdge(nodeCount);
		bool match = false;

		EdgeData edge = EdgeData();
		edge.nodeA = nodeCount;
		edge.nodeB = cheapestEdge;
		edge.weight = tree[nodeCount][cheapestEdge];

		if (edges.size() == 0)
		{
			edges.push_back(edge);
		}
		else{



			for (int edgeCount = 1; edgeCount < edges.size(); edgeCount++)
			{
				int nodeA = edges[edgeCount].nodeA;
				int nodeB = edges[edgeCount].nodeB;

				if (nodeA == edge.nodeA)
				{
					if (nodeB == edge.nodeB)
					{
						match = true;
						break;
					}
				}
				else if (nodeB == edge.nodeB)
				{
					if (nodeA == edge.nodeA)
					{
						match = true;
						break;
					}
				}
				else if (nodeB == edge.nodeA)
				{
					if (nodeA == edge.nodeB)
					{
						match = true;
						break;
					}
				}
				else if (nodeA == edge.nodeB)
				{
					if (nodeB == edge.nodeA)
					{
						match = true;
						break;
					}
				}
			}

			if (match == false)
			{
				edges.push_back(edge);
			}

			match = false;
		}
	}
}

template<class T>
void Sollins<T>::CreateComponents(){

	//int edgeIndex = 1;
	bool match = false;

	//Create first component
	if (components.size() == 0){
		pushVector.clear();
		components.push_back(pushVector);

		components[0].push_back(edges[0]);
	}

	//Place each edge
	for (int edgeNumber = 1; edgeNumber < edges.size(); edgeNumber++)
	{
		EdgeData edge = edges[edgeNumber];

		//Check each component to see if edge can be placed
		for (int componentCount = 0; componentCount < components.size(); componentCount++)
		{
			if (match == false)
			{
				for (int edgeCount = 0; edgeCount < components[componentCount].size(); edgeCount++)
				{
					//Find the edge
					if (components[componentCount][edgeCount].nodeA == edge.nodeA)
					{
						components[componentCount].push_back(edge);
						match = true;
						break;
					}
					else if (components[componentCount][edgeCount].nodeB == edge.nodeB)
					{
						components[componentCount].push_back(edge);
						match = true;
						break;
					}
					else if (components[componentCount][edgeCount].nodeA == edge.nodeB)
					{
						components[componentCount].push_back(edge);
						match = true;
						break;
					}
					else if (components[componentCount][edgeCount].nodeB == edge.nodeA)
					{
						components[componentCount].push_back(edge);
						match = true;
						break;
					}
				}
			}
		}

		//If match false, no component was found
		//Create new component
		if (match == false)
		{
			pushVector.clear();
			components.push_back(pushVector);

			components[components.size()].push_back(edge);
		}


		match = false;

	}

}




template<class T>
void Sollins<T>::solveTree(){

	GetEdges();
	CreateComponents();

	while (components.size() > 1 )
	{
		//Merge
	}

	cout << endl;
	cout << "Boruvka's MST:" << endl;
	for (int edgeCount = 0; edgeCount < components[0].size(); edgeCount++)
	{
		int nodeA = components[0][edgeCount].nodeA;
		int nodeB = components[0][edgeCount].nodeB;
		totalWeight += components[0][edgeCount].weight;

		if (nodeA < nodeB)
		{
			cout << "(" << nodeA << ", " << nodeB << ")" << endl;
		}
		else {
			cout << "(" << nodeB << ", " << nodeA << ")" << endl;
		}

		//cout << "(" << components[0
	}


	cout << "Total Weight:\n" << totalWeight << endl;
	


}

template<class T>
Sollins<T>::~Sollins(){

}



int main() {

	int nodeCount; //Number of Nodes
	int edgeCount; //Number of vertices between nodes

	//Node Weight Pair Input
	int nodeA, nodeB, weight;

	//Start Node
	int startNode = 0;

	cout << "Enter number of Nodes and Edges(s):" << endl;
	cin >> nodeCount >> edgeCount;

	Prim<int> prim = Prim<int>(nodeCount);
	Kruskal<int> kruskal = Kruskal<int>(nodeCount, edgeCount);
	Sollins<int> sollins = Sollins<int>(nodeCount); //Need to create class

	//prim.printTree();
	//kruskal.printEges();

	cout << endl;
	cout << "Enter Node A and Node B and Undirected Edge Weight(s):" << endl;

	for (int i = 0; i < edgeCount; i++)
	{
		cin >> nodeA >> nodeB >> weight;
		//Create prim tree
		prim.fillTree(nodeA, nodeB, weight);

		//Create Kruskal tree
		kruskal.addEdge(nodeA, nodeB, weight);

		//Create sollins tree
		sollins.fillTree(nodeA, nodeB, weight);

		//Clear local value before next input
		nodeA = 0;
		nodeB = 0;
		weight = 0;
	}

	cout << endl;
	//prim.printTree();

	cout << "Enter the start Node" << endl;
	cin >> startNode;

	prim.solveTree(startNode);
	kruskal.solveTree();
	sollins.solveTree();

	cin.get();
	cin.get();
}

