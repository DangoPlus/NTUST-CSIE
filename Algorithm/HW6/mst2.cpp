#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include <algorithm>
 
 
using namespace std;
 
 
//pour v¨¦rifier si le graphe est directe
bool isDirected = false;
 
 
 
bool isPrim = false;
bool isKruskal = false;
bool isEliminationCycle = false;
 
 
 
//cr¨¦e un pointeur vers la matrice de cout et d'arrete
int** matriceGeneral;
 
int** matriceBool;
 
 
 
// -----------------------------------------------  <1> FONCTIONS NECESSAIRES AVANT L'APPLICATION DES ALGORITHMES  ---------------------------------------------
 
//compter le num¨¦ro de lignes pour l'allorcation de Ligne du fichier
int loop(string argFile)
{
	ifstream in(argFile);
	int numLines = 0;
	string unused;
	while ( std::getline(in, unused) )
		++numLines;
	return numLines;
}
 
 
//renvoie la ligne num¨¦ro k
string parse(string argFile, int k)
{
	//int taille = loop(argFile); nombre de ligne du fichier a mettre dans le for si on souhaite avoir une ligne > 3
	string line; //les lignes des donnes du fichier
	ifstream myfile(argFile); //ouvre le fichier
	string Ligne[4];// Cr¨¦e le tableau des lignes (4 emplacement)
	string tmp;// valeur temporellle qui va etre renvoy¨¦ et correspond a la ligne k
	k = k - 1;//decalage des ligne
	if (myfile.is_open()) //Si le  fichier est ouvert
	{
		for(int i = 0; i <= 3; ++i)
		{
			getline (myfile,line);//sauvegarde ligne par ligne       
			if(k == i)//si i = k et i > kmax i et k sont reduits
			{
				Ligne[i] = line;               
			}
        }
	myfile.close();//ferme myfile
	}   
    else
	{
		cout << "Erreur fichier";
		exit(1); //si myfile n'est pas ouvert
	}
	 

	return Ligne[k];
}
 
 
 
//renvoie le nombre de noeuds
int getNbNodes(string argFile)
{
	string tmp;
	int nbrNodes;
	string tmp2 = parse(argFile,2);//la ligne de nombre de sommets
	stringstream ss(tmp2);
	ss >> tmp >> nbrNodes;
	return nbrNodes;
}
 
//renvoie le nombre d'arretes
int getNbEdges(string argFile)
{
	string tmp;
	int nbrEdges;
	string tmp3 = parse(argFile,3);
	stringstream ss(tmp3);
	ss >> tmp >> nbrEdges;
	return nbrEdges;
}
 
 
//allocation de la matricce
void allocateMatrice(string argFile)
{
	int nbNodes = getNbNodes(argFile);
	nbNodes = nbNodes * 2;
	matriceGeneral = (int**)malloc(nbNodes*sizeof(int*));
	matriceBool = (int**)malloc(nbNodes*sizeof(int*));
 
	for (int i = 0; i <= nbNodes; i++)
	{
		matriceGeneral[i]=(int*)malloc(nbNodes*sizeof(int));
		matriceBool[i]=(int*)malloc(nbNodes*sizeof(int));
	}               
}
 
 
//cree les matrices de cout et d'existence d'arretes
void createMatrice(string argFile)
{
	int s1 = 0;//int num¨¦ro sommet1
	int s2 = 0;//int num¨¦ro sommet1
	int c = 0;//int cout sommet1---sommet2 ou sommet2---sommet1
	ifstream myfile(argFile); //ouvre le fichier
	int taille = loop(argFile);
	char tmp = parse(argFile,1)[0];//le premier char de la premiere ligne pour savoir le type de graphe 'U' pour undirected et 'D' pour directed
	string line;
	if (myfile.is_open()) //Si le  fichier est ouvert
	{
		if( tmp == 'U' )//graphe undirected s1--s2 = s2--s1 = c
		{                       
			allocateMatrice(argFile);//alloue en memoire les matrices
			for(int i = 0; i <= taille-3; ++i)//boucle parcours donn¨¦es
			{
				getline (myfile,line);
				stringstream ss(line);
				bool read = ss >> s1 >> s2 >> c;
				matriceBool[s1][s2] = read;
				matriceBool[s2][s1] = read;
				matriceGeneral[s1][s2] = c;
				matriceGeneral[s2][s1] = c;
				
				if(c < 0)
				{
					printf("\n Le graphe a des couts negatifs, le programme s'est termine \n");
					exit(1);
				}                             
			}
		}
		
	else if (tmp == 'D')//graphe directed s1--s2 = c1 et s2--s1 = c (c1 et c2 a priori different)
	{
		allocateMatrice(argFile);
		for(int i = 0; i <= taille-3; ++i)
		{
			getline (myfile,line);
			stringstream ss(line);
			ss >> s1 >> s2 >> c;
			bool read = ss >> s1 >> s2 >> c;
			matriceBool[s1][s2] = read;
			matriceGeneral[s1][s2] = c;
		}
	isDirected = true;                     
	} myfile.close();//closing the file
}
	else cout << "Erreur fichier"; //if the file is not open output
}
 
 
 
 
// -----------------------------------------------  <2-1> ALGORITHME DE PRIM  ---------------------------------------------
 
//renvoie l'index de la valeur minimal du tableau key qui n'existe pas encore dans mstSet
int minKey(int key[], string argFile, bool mstSet[])
{
	int nbNodes = getNbNodes(argFile);
	int min = INT_MAX, min_index;//initialise la valeur min ¨¤ INT_MAX
	for (int i = 0; i < nbNodes; i++)
	{
		if (key[i] < min && mstSet[i] == false)
		{
			min = key[i], min_index = i;
		}
	}
	
	return min_index;
}
 
//cr¨¦e un fichier outputFile dans lequel on met l'arbre minimal ligne par ligne
int fileMST(int parent[], int n, string argFile)
{
	ofstream outputFile;
	int total = 0;
	outputFile.open("outputFile.txt");
	int nbNodes = getNbNodes(argFile);
	outputFile << "Arrete   Cout\n";
	for (int i = 1; i < nbNodes; i++)
	{
		outputFile << parent[i] << " - " << i << "     " << matriceGeneral[i][parent[i]] << "\n";
		//cout << parent[i] << " - " << i << "     " << matriceGeneral[i][parent[i]] << "\n";
		total = total + matriceGeneral[i][parent[i]];
	}
	       
	outputFile << "Le cout total est de : " << total << "\n";       

	return total; 
}
 
//renvoie le cout total de l'arbre minimal
int prim(string argFile)
{
	int nbNodes = getNbNodes(argFile);
	int parent[nbNodes];// tableau de l'arbre minimal
	int key[nbNodes]; // tableau des couts vers les sommets connectes
	bool mstSet[nbNodes];// tableau de sommets non inclus dans l'arbre minimal
	
	for (int i = 0; i < nbNodes; i++)
	{
		key[i] = INT_MAX, mstSet[i] = false;//initialise la valeur min ¨¤ INT_MAX
	}      
	            
	key[0] = 0; // L'algorithme commence ¨¤ partir du sommet 0
	parent[0] = -1; // initialise le tableau parent ¨¤ -1
	 
	for (int count = 0; count < nbNodes-1; count++)
	{
		int j = minKey(key, argFile, mstSet);// choix du key minimum non inclus dans l'AM
		mstSet[j] = true; // ajoute j dans l'AM               
		for (int i = 0; i < nbNodes; i++)
		{
			if ((matriceBool[j][i]==1) && mstSet[i] == false && matriceGeneral[j][i] < key[i])
			{
				parent[i] = j;
				key[i] = matriceGeneral[j][i];
				//cout << i << "  parent  " << parent[i] << "  key "  << key[i]  << endl;
			}
		}
	}
	       

       
	int tmp = fileMST(parent, nbNodes, argFile);
	isPrim = true;       

	return tmp;               
}
 
 
 
// -----------------------------------------------  <2-1> ALGORITHME DE KRUSKAL  ---------------------------------------------

typedef struct edge{
	int src, des, weight;
}edge;
 
edge *e;
int *d;
 
void createEdges(string argFile)
{
	int nbEdges = getNbEdges(argFile);       
	int nbNodes = getNbNodes(argFile);       
	e = (edge*)malloc(nbEdges*sizeof(edge));
	d = (int*)malloc(nbEdges*sizeof(int)); 
	
	
	int count = 0;    
	for(int i = 0; i < nbNodes; i++)
	{
		for(int j = 0; (matriceBool[i][j] == 1) && (i != j) && j < nbNodes; j++)
		{                      
			e[count].src = i;
			e[count].des = j;
			e[count].weight = matriceGeneral[i][j];
			//cout << endl << graph->edge[count].src << "    "  << graph->edge[count].dest << "    "  << graph->edge[count].weight << "    " << endl;                      
			count++;
		}                              
	}      
	
	
	for(int i = 0; i < nbEdges; i++)
		d[i] = -1;
}
 
bool checkCycle(int src,int des)
{       
	while(d[des]!=-1)
		des = d[des];
		
	while(d[src]!=-1)
		src = d[src];

	if(src != des)
	{
		d[des]=src;
		return true;
	}
	return false;
}

int myCompare(const void *e, const void *f)
{
	struct edge* e1 = (struct edge*)e;
	struct edge* f1 = (struct edge*)f;
	return e1->weight - f1->weight;
} 

int kruskal(string argFile)
{
	ofstream outputFile;
	outputFile.open("outputFile.txt");
	outputFile << "Arrete   Cout\n";
	createEdges(argFile);
	
	int nbEdges = getNbEdges(argFile);
	int cost = 0;
	       
	//sort(argFile);
	
	qsort(e, nbEdges, sizeof(struct edge), myCompare);
	

       
	for(int i = 0; i < nbEdges ; i++)
	{
		if(checkCycle(e[i].src , e[i].des))
		{
			cost+=e[i].weight;
			outputFile << e[i].src << " - " << e[i].des << "     " << e[i].weight << endl;  
		}
	}
	isKruskal = true;
	outputFile << "Le cout total est de : " << cost << "\n";
	 
	return cost;
}
// -----------------------------------------------  <2-1> ALGORITHME D'ELIMINATION PAR CYCLES  ---------------------------------------------
 
int maxWeight(int s1, int s2)
{
	int max = 0;
	
	for(int i = s1; i <= s2; i++)
	{
		if(e[i].weight > max)
		{
			//max = e[i].weight;
			max = e[i].weight;
		}
	}
	
	
	return max;
}


bool checkCycleElim(int src, int des)
{

	while(d[des]!=-1)
		des = d[des];
		
	while(d[src]!=-1)
		src = d[src];

	if(src != des)
	{
		d[des]=src;
		return true;
	}
	return false;
}


int eliminationCycles(string argFile)
{
	int nbNodes = getNbNodes(argFile);
	int nbEdges = getNbEdges(argFile);
	createEdges(argFile);
	int cost = 0;
	
	for(int i = 0; i < nbEdges; i++)
	{
		cost += e[i].weight;
	}
	
	int i = 0;
	while( i < nbNodes)
	{
		
		for(int j = 2; (j < nbNodes) && (i != j); j++)
		{
			if(checkCycleElim(i, j) || checkCycleElim(j, i))
			{
				int tmp = maxWeight(i, j);
				cost -= tmp;
				cout << tmp << "   " << i << "   " << j << "   " << cost << endl;				
			}
		}
		i++;
	}
	

	isEliminationCycle = true;
	return cost;
}


 
 
 
// -----------------------------------------------  <3> CHOIX D'ALGO ET MAIN  ---------------------------------------------
 
int algoChoice(int i, string argFile)
{
	int tmp;       
	switch (i)
	{
		case 1:
			tmp = prim(argFile);
			break;
		case 2:
			tmp = kruskal(argFile);
			break;
		case 3:
			//ici appel a elemination de cycles et enregistrement du cout total
			tmp = eliminationCycles(argFile);
			break;
		default:
			cout << "option non comprise" << endl;
			exit(1);
			break;
	}       
	return tmp;
}

void freeStuff(string argFile)
{

	free(d);
	free(e);
	free(matriceBool);
	free(matriceGeneral);

}
 
 
int main ( int argc, char *argv[])
{
	if ( argc != 2 )
		cout<<"\nutilisation: "<< argv[0] <<" <fichier data>\n";
		       
	else
	{
		clock_t tStart = clock();//start clock() pour compter le temps d'execution
		createMatrice(argv[1]);//Creation de la matrice
		clock_t tFinis = clock();// finish clock()
		double tempMatrice = (tFinis - tStart);//temps de creation de la matrice               
		tempMatrice = tempMatrice / (CLOCKS_PER_SEC/1000);//temps de creation de la matrice               
                               
		int input;                             
		printf("\nVeuillez choisir l'algorithme que  vous souhaitez executez :\n<1> Algorithme de Prim \n<2> Algorithme de Kruskal \n<3> Algorithme d'elimination de cycles \n\n");
                               
		if(!isDirected)
		{
			cin >> input;
			clock_t tStart = clock();
			int tmp = algoChoice(input, argv[1]);
			clock_t tFinis = clock();
			double tempTotal = tempMatrice + (tFinis - tStart);//temps total (creation matrice + execution algo)                       
			tempTotal = tempTotal / (CLOCKS_PER_SEC/1000);//temps total (creation matrice + execution algo)                       
                 
			if(isPrim || isKruskal || isEliminationCycle)
			{
				cout << endl << "Le cout total est : " << tmp << endl ;		
				cout << "       Le temps total d'execution : " << tempTotal << " ms" << endl;

			}
			                       
			else cout << endl << "l'algorithme ne s'est pas correctement execute, veuillez lire le README.txt ou contacter le support" << endl;
                       
		} 
		
	else if(isDirected)
		cout << endl << "Le graphe est directed, ce type de graphe n'est pas encore pris en compte" << endl;
          
	}
	
	return 0;
}
