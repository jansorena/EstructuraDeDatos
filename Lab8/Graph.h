#include <vector>
#ifndef GRAPH
#define GRAPH

class Graph{
private:
	int size;
	std::vector<std::vector<int>> adj;
public:
	Graph(int n);
	~Graph();
	void addEdge(int u, int v);
	bool checkConnectivityDFS(int u);
	bool checkConnectivityBFS(int u);
};

#endif
