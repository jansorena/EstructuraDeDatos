#ifndef LISTADT_H
#define LISTADT_H

class List{
	public:
		virtual void insert(int) = 0; // insertar elemento al principio
		virtual void pop() = 0; // eliminar al final
		virtual int at(int) = 0; // acceder al i-esimo elemento
		virtual int size() = 0; // obtener cantidad de elementos
		virtual void printList() = 0; // imprimir Lista
};

#endif