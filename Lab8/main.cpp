#include <bits/stdc++.h>
#include "Graph.h"
using namespace std;

int main(){
	Graph *g = new Graph(6);
	g->addEdge(0,1);
	g->addEdge(0,5);
	g->addEdge(1,2);
	g->addEdge(2,3);
	g->addEdge(3,4);
	g->addEdge(4,1);
	
	int nodo = 1;

	cout << "DFS nodo: " << nodo << endl;
	if(g->checkConnectivityDFS(nodo)) cout << "el nodo puede alcanzar a todos los otros nodos" << endl;
	else cout << "el nodo no puede alcanzar a todos los otros nodos" << endl;

	cout << "BFS nodo: " << nodo << endl;
	if(g->checkConnectivityBFS(nodo)) cout << "el nodo puede alcanzar a todos los otros nodos" << endl;
	else cout << "el nodo no puede alcanzar a todos los otros nodos" << endl;

	return 0;
}