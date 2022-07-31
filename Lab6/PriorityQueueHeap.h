#include "PriorityQueueADT.h"
#include <vector>

#ifndef PRIORITYQUEUEHEAP
#define PRIORITYQUEUEHEAP

class PriorityQueueHeap : public PriorityQueueADT{
private:
  std::vector<int> v;
public:
  PriorityQueueHeap();
  ~PriorityQueueHeap();
  void push(int n); //Insertar elemento
  int top(); //Obtener el elemento mı́nimo
  void pop(); //Eliminar el elemento mı́nimo
  int size(); //Obtener la cantidad de elementos almacenados
  bool empty(); //Verificar si está vacı́o
  void print();
  void HeapSort();
};

#endif
