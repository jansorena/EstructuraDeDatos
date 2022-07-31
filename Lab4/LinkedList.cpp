#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(){
	head = NULL;
	tail = NULL;
	tam = 0;
}

LinkedList::~LinkedList(){ // destructor lista enlazada
	struct node *aux = head;
	while(aux!=NULL){
		struct node *del = aux->next;
		delete[] aux;
		aux = del;
	}
	head = tail = NULL;
}

void LinkedList::insert(int number){ // insertar al inicio
	struct node *aux = new node;
	aux->n = number;
	aux->next = NULL;
	if(head == NULL){
		head = aux;
		tail = aux;
	}else{
		aux->next = head;
		head = aux;
	}
	tam++;
}

void LinkedList::pop(){
	struct node *aux = head;
	struct node *pre_tail;
	while(aux!=tail){ // mientras el puntero sea distinto de la cola guardo la posicion anterior
		pre_tail = aux;
		aux = aux->next;
	}
	if(head == tail){ // si hay un solo elemento, libera memoria y desreferencia cabeza y cola
		delete[] aux;
		head = tail = NULL;
	}else{ // si hay varios elementos, actualiza la cola y libera memoria
		pre_tail->next = NULL;
		tail = pre_tail;
		delete[] aux;
	}
	if(tam > 0) tam--;
}

int LinkedList::size(){ return tam; } // retorna tamano lista

int LinkedList::at(int c){ // retorna elemento posicion i-esima
	struct node* pos = head;
	if(c >= tam) return -1;
	for (int i = 0; i < c; i++){
		pos = pos->next;
	}
	return pos->n;
}

void LinkedList::printList(){ // imprime la lista
	struct node *aux = head;
	while(aux!=NULL){
		cout << aux->n << "-->";
		aux = aux->next;
	}
	cout << "NULL" << endl;
}