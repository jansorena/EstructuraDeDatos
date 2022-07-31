#include <bits/stdc++.h>
#include "QueueADT.h"
using namespace std;

#ifndef STACKSQUEUE
#define STACKSQUEUE

class StacksQueue : public QueueADT{
private:
	stack<int> s1;
	stack<int> s2;
	int tam;
	int frente;
public:
	StacksQueue();
	~StacksQueue();
	void push(int n); // Encolar elemento al final
	void pop(); // Desencolar el elemento al principio
	int front(); // Acceder al primer elemento de la cola
	int size(); // Obtener la cantidad de elementos almacenados
	bool empty(); // Verificar si la cola está vacı́a
	void printQueue();
};

#endif