#include "PriorityQueueADT.h"
#include <vector>
#ifndef PRIORITYQUEUEUNSORTED
#define PRIORITYQUEUEUNSORTED

class PriorityQueueUnsorted : public PriorityQueueADT{
private:
  std::vector<int> v;
public:
  PriorityQueueUnsorted();
  ~PriorityQueueUnsorted();
  void push(int n); //Insertar elemento
  int top(); //Obtener el elemento mı́nimo
  void pop(); //Eliminar el elemento mı́nimo
  int size(); //Obtener la cantidad de elementos almacenados
  bool empty(); //Verificar si está vacı́o
  void print();
  void SelectionSort();
};

#endif
