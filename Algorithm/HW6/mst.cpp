
/*-----------------------------/
ALH
Minimum Spanning Tree Algorithms
Prim's and Kruskal's
13/04/2017
/-----------------------------*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <math.h>
#include <float.h>
#include <climits>

using namespace std;

void kruskal(int n, vector<vector<int> > &graph, vector<vector<int> > &T, vector<vector<int> > &V) {
	int i, j, bestminedge;
	int mini = 0, minj = 0, savei1 = 0, savei2 = 0, m = 0, total = 0; //m = number of edges, |E|
	int minedge = INT_MAX;

	//To find initial min weighted edge:
	for (i = 0; i < graph.size(); i++) {
		for (j = 0; j < graph[i].size(); j++) {
			if (graph[i][j] < minedge && graph[i][j] != 0) {
				minedge = graph[i][j];
				mini = i;
				minj = j;
			}
		}
	}

	for (i = 0; i < V.size(); i++) {
		for (j = 0; j < V[i].size(); j++) {
			if (V[i][j] == mini) {
				savei1 = i;
			}
			if (V[i][j] == minj) {
				savei2 = i;
			}
		}
	}

	if (savei1 != savei2) {
		for (j = 0; j < V[savei2].size(); j++) {
			V[savei1].push_back(V[savei2][j]);
		}
		V[savei2].clear();
	}

	bestminedge = minedge;
	T[mini][minj] = bestminedge;
	T[minj][mini] = bestminedge;
	graph[mini][minj] = 0;
	graph[minj][mini] = 0;
	m += 1;
	total = total + bestminedge;

	cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << bestminedge << endl;

	//To find second min weighted edge - won't form a cycle, can be done outside of iteration loop
	int minedge1 = INT_MAX;
	for (i = 0; i < graph.size(); i++) {
		for (j = 0; j < graph[i].size(); j++) {
			if (graph[i][j] < minedge1 && graph[i][j] >= bestminedge && graph[i][j] != 0) {
				minedge1 = graph[i][j];
				mini = i;
				minj = j;
			}
		}
	}

	for (i = 0; i < V.size(); i++) {
		for (j = 0; j < V[i].size(); j++) {
			if (V[i][j] == mini) {
				savei1 = i;
			}
			if (V[i][j] == minj) {
				savei2 = i;
			}
		}
	}

	if (savei1 != savei2) {
		if (V[savei1].size() > V[savei2].size()) {
			for (j = 0; j < V[savei2].size(); j++) {
				V[savei1].push_back(V[savei2][j]);
			}
			V[savei2].clear();
		}
		else if (V[savei2].size() > V[savei1].size()) {
			for (j = 0; j < V[savei1].size(); j++) {
				V[savei2].push_back(V[savei1][j]);
			}
			V[savei1].clear();
		}
		else if (V[savei1].size() == V[savei2].size()) {
			for (j = 0; j < V[savei2].size(); j++) {
				V[savei1].push_back(V[savei2][j]);
			}
			V[savei2].clear();
		}
	}

	bestminedge = minedge1;
	T[mini][minj] = bestminedge;
	T[minj][mini] = bestminedge;
	graph[mini][minj] = 0;
	graph[minj][mini] = 0;
	m += 1;
	total = total + bestminedge;

	cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << bestminedge << endl;

/*------------------------------------------------------------------------------------------------------------------------------------------*/
	//start of iterations
	while(m < n-1){
		int minedge2 = INT_MAX;
		for (i = 0; i < graph.size(); i++) {
			for (j = 0; j < graph[i].size(); j++) {
				if (graph[i][j] < minedge2 && graph[i][j] >= bestminedge && graph[i][j] != 0) {
					minedge2 = graph[i][j];
					mini = i;
					minj = j;
				}
			}
		}

		for (i = 0; i < V.size(); i++) {
			for (j = 0; j < V[i].size(); j++) {
				if (V[i][j] == mini) {
					savei1 = i;
				}
				if (V[i][j] == minj) {
					savei2 = i;
				}
			}
		}

		if (savei1 == savei2) {
			graph[mini][minj] = 0;
			graph[minj][mini] = 0;
		}

		else if (savei1 != savei2) {
			if (V[savei1].size() > V[savei2].size()) {
				for (j = 0; j < V[savei2].size(); j++) {
					V[savei1].push_back(V[savei2][j]);
				}
				V[savei2].clear();
			}
			else if (V[savei2].size() > V[savei1].size()) {
				for (j = 0; j < V[savei1].size(); j++) {
					V[savei2].push_back(V[savei1][j]);
				}
				V[savei1].clear();
			}
			else if (V[savei1].size() == V[savei2].size()) {
				for (j = 0; j < V[savei2].size(); j++) {
					V[savei1].push_back(V[savei2][j]);
				}
				V[savei2].clear();
			}
			else {

			}

			bestminedge = minedge2;
			T[mini][minj] = bestminedge;
			T[minj][mini] = bestminedge;
			graph[mini][minj] = 0;
			graph[minj][mini] = 0;
			m += 1;
			total = total + bestminedge;

			cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << bestminedge << endl;
		}
		
	}//end of while loop
	cout << endl;
	cout << "Total weight of MST: " << total << endl;
}

void prim(int n, vector<vector<int> > &graph, vector<vector<int> > &T, vector<vector<int> > &V) {
	int i, j;
	int mini = 0, minj = 0, savei1 = 0, savei2 = 0, m = 0, total = 0; //m = number of edges, |E|
	int minedge = INT_MAX;

	//to find initial min weighted edge:
	for (i = 0; i < graph.size(); i++) {
		for (j = 0; j < graph[i].size(); j++) {
			if (graph[i][j] < minedge && graph[i][j] != 0) {
				minedge = graph[i][j];
				mini = i;
				minj = j;
			}
		}
	}

	for (i = 0; i < V.size(); i++) {
		for (j = 0; j < V[i].size(); j++) {
			if (V[i][j] == mini) {
				savei1 = i;
			}
			if (V[i][j] == minj) {
				savei2 = i;
			}
		}
	}

	if (savei1 != savei2) {
		for (j = 0; j < V[savei2].size(); j++) {
			V[savei1].push_back(V[savei2][j]);
		}
		V[savei2].clear();
	}

	for (i = 0; i < T.size(); i++) {
		for (j = 0; j < T[i].size(); j++) {
			if (i == mini || i == minj) {
				T[i][j] = graph[i][j];
			}
		}
	}

	graph[mini][minj] = 0;
	graph[minj][mini] = 0;
	T[mini][minj] = 0;
	T[minj][mini] = 0;
	m += 1;
	total = total + minedge;

	cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << minedge << endl;

	//to find second min weighted edge - won't form a cycle, can be done outside of iteration loop
	int minedge1 = INT_MAX;
	for (i = 0; i < T.size(); i++) {
		for (j = 0; j < T[i].size(); j++) {
			if (T[i][j] < minedge1 && T[i][j] != 0) {
				minedge1 = T[i][j];
				mini = i;
				minj = j;
			}
		}
	}

	for (i = 0; i < V.size(); i++) {
		for (j = 0; j < V[i].size(); j++) {
			if (V[i][j] == mini) {
				savei1 = i;
			}
			if (V[i][j] == minj) {
				savei2 = i;
			}
		}
	}

	if (savei1 != savei2) {
		if (V[savei1].size() > V[savei2].size()) {
			for (j = 0; j < V[savei2].size(); j++) {
				V[savei1].push_back(V[savei2][j]);
			}
			V[savei2].clear();
		}
		else if (V[savei2].size() > V[savei1].size()) {
			for (j = 0; j < V[savei1].size(); j++) {
				V[savei2].push_back(V[savei1][j]);
			}
			V[savei1].clear();
		}
		else if (V[savei1].size() == V[savei2].size()) {
			for (j = 0; j < V[savei2].size(); j++) {
				V[savei1].push_back(V[savei2][j]);
			}
			V[savei2].clear();
		}
	}

	for (i = 0; i < T.size(); i++) {
		for (j = 0; j < T[i].size(); j++) {
			if (i == mini || i == minj) {
				T[i][j] = graph[i][j];
			}
		}
	}

	graph[mini][minj] = 0;
	graph[minj][mini] = 0;
	T[mini][minj] = 0;
	T[minj][mini] = 0;
	m += 1; 
	total = total + minedge1;
	
	cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << minedge1 << endl;

/*------------------------------------------------------------------------------------------------------------------------------------------*/
	//start of iterations
	while(m < n-1) {
		int minedge2 = INT_MAX;

		for (i = 0; i < T.size(); i++) {
			for (j = 0; j < T[i].size(); j++) {
				if (T[i][j] < minedge2 && T[i][j] != 0) {
					minedge2 = T[i][j];
					mini = i;
					minj = j;
				}
			}
		}

		for (i = 0; i < V.size(); i++) {
			for (j = 0; j < V[i].size(); j++) {
				if (V[i][j] == mini) {
					savei1 = i;
				}
				if (V[i][j] == minj) {
					savei2 = i;
				}
			}
		}

		if (savei1 == savei2) {
			graph[mini][minj] = 0;
			graph[minj][mini] = 0;
			T[mini][minj] = 0;
			T[minj][mini] = 0;
		}

		else if (savei1 != savei2) {
			if (V[savei1].size() > V[savei2].size()) {
				for (j = 0; j < V[savei2].size(); j++) {
					V[savei1].push_back(V[savei2][j]);
				}
				V[savei2].clear();
			}
			else if (V[savei2].size() > V[savei1].size()) {
				for (j = 0; j < V[savei1].size(); j++) {
					V[savei2].push_back(V[savei1][j]);
				}
				V[savei1].clear();
			}
			else if (V[savei1].size() == V[savei2].size()) {
				for (j = 0; j < V[savei2].size(); j++) {
					V[savei1].push_back(V[savei2][j]);
				}
				V[savei2].clear();
			}
			else {

			}

			for (i = 0; i < T.size(); i++) {
				for (j = 0; j < T[i].size(); j++) {
					if (i == mini || i == minj) {
						T[i][j] = graph[i][j];
					}
				}
			}

			graph[mini][minj] = 0;
			graph[minj][mini] = 0;
			T[mini][minj] = 0;
			T[minj][mini] = 0;
			m += 1;
			total = total + minedge2;

			cout << "Edge " << m << ": " << "(" << mini << ", " << minj << ")\t Weight: " << minedge2 << endl;
		}
	}//end of while loop
	cout << endl;
	cout << "Total weight of MST: " << total << endl;

}

int main(int argc, char **argv) {
	if (argc < 1) {
		cout << "MST\n----------------\n";
		cout << "inputFile = name of the problem file (in correct format).\n";
	}

	int i, j, n, x;
	ifstream inStream;
	inStream.open(argv[1]);
	if (inStream.fail()) {
		cout << "ERROR OPENING INPUT FILE.";
		exit(1);
	}	
	inStream >> n;

	cout << "MST\n--------\n";
	cout << n << "x" << n << " Adjacency Matrix: \n";

	vector<vector<int> > graph;
	vector<int> v1(n, 0);
	vector<vector<int> > T(n, vector<int>(n, 0)); //empty adjaceny matrix
	vector<vector<int> > V; //vector of end vertices
	vector<int> v2;


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			inStream >> v1[j];
		}
		graph.push_back(v1);
	}

	inStream.close();

	for (i = 0; i < graph.size(); i++) {
		for (j = 0; j < graph[i].size(); j++) {
			cout << graph[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (i = 0; i < graph.size(); i++) {
		for (j = 0; j < graph[i].size(); j++) {
			if (graph[i][j] != graph[j][i]) {
				cout << "ERROR " << graph[i][j] << endl;
			}
		}
	}

	for (i = 0; i < n; i++) {
		v2.push_back(i);
		V.push_back(v2);
		v2.clear();
	}
	v2.clear();


	cout << "Please choose from the following algorithms:\n";
	cout << "1. Prim's Algorithm.\n";
	cout << "2. Kruskal's Algorithm.\n";
	cout << "Enter 1 or 2: ";
	cin >> x;

	while (x != 1 && x != 2) {
		cout << "Please enter either 1 or 2: ";
		cin >> x;
	}
	cout << endl;

	time_t startTime, endTime;
	startTime = clock();

	switch (x) {
		case 1:
			prim(n, graph, T, V);
			break;
		case 2:
			kruskal(n, graph, T, V);
			break;
		default:
			cout << "Please select a valid algorithm.";

	}
	cout << endl;
	endTime = clock();
	int totalTime = (int)(((endTime - startTime) / double(CLOCKS_PER_SEC)) * 100);
	cout << "CPU Time = " << totalTime << " milliseconds.\n";

}//end of int main()

