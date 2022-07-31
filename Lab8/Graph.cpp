#include <bits/stdc++.h>
#include "Graph.h"
using namespace std;

Graph::Graph(int n){
	size = n;
	adj = vector<vector<int>>(size); // tamaño
}

Graph::~Graph(){}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v); // vertice u dirigido a v
}

bool Graph::checkConnectivityDFS(int u){
	bool visited[size] = {false};
	stack <int> s; // stack
	s.push(u); // empujamos el nodo al stack
	while(!s.empty()){
		int nodo = s.top();
		s.pop(); // sacamos el nodo
		if(visited[nodo]) continue; // si ya esta visitado, avanza la siguiente
		else{
			visited[nodo] = true; // marcar el nodo visitado
			for (auto x : adj[nodo]){ // recorrer su lista de adyacencia
				if(!visited[x]) s.push(x);
			}
		}
	}
	for (int i = 0; i < size; i++){
		if(!visited[i]) return false; // si un nodo no esta visitado return false
	}
	return true;
}

bool Graph::checkConnectivityBFS(int u){
	bool visited[size] = {false};
	queue<int> q;
	q.push(u); // empujar nodo a la cola
	visited[u] = true; // marcar nodo como visitado
	while(!q.empty()){
		int nodo = q.front();
		q.pop(); // sacar nodo de la cola
		for(auto x : adj[nodo]){ // iterar por su lista de adyacencia
			if(visited[x]) continue; // si ya visitado continua con el siguiente
			else{
				visited[x] = true; // marca como visitado
				q.push(x); // empuja a la cola
			}
		}
	}
	for (int i = 0; i < size; i++){
		if(!visited[i]) return false; // si un nodo no esta visitado return false
	}
	return true;
}