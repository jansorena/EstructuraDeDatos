#ifndef QUEUEADT
#define QUEUEADT

class QueueADT{
public:
	virtual void push(int)=0; // Encolar elemento al final
	virtual void pop()=0; // Desencolar el elemento al principio
	virtual int front()=0; // Acceder al primer elemento de la cola
	virtual int size()=0; // Obtener la cantidad de elementos almacenados
	virtual bool empty()=0; // Verificar si la cola está vacı́a
	virtual void printQueue()=0;
};
#endif