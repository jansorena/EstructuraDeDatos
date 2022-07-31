#include "ListADT.h"

#ifndef LINKEDLIST
#define LINKEDLIST

struct node{
	int n;
	node *next;
};

class LinkedList : public List{
	private:
		struct node *head;
		struct node *tail;
		int tam;
	public:
		LinkedList();
		~LinkedList();
		void insert(int n); // insertar elemento al principio
		void pop(); // eliminar al final
		int at(int c); // acceder al i-esimo elemento
		int size(); // obtener cantidad de elementos
		void printList(); // imprimir lista
};

#endif