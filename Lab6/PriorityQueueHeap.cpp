#include "PriorityQueueHeap.h"
#include <bits/stdc++.h>

PriorityQueueHeap::PriorityQueueHeap(){
  v.push_back(INT_MIN); // valor dummy para la primera posicion
}
PriorityQueueHeap::~PriorityQueueHeap(){}

void PriorityQueueHeap::push(int n){
  v.push_back(n);
  int pos = v.size()-1;
  while(pos != 1 && v[pos] < v[pos/2]){ //upheap
    int aux = v[pos]; //swap
    v[pos] = v[pos/2];
    v[pos/2] = aux;
    pos = pos/2;
  }
}

int PriorityQueueHeap::top(){
  return v[1];
}

void PriorityQueueHeap::pop(){
  v[1] = v[v.size()-1];
  v.pop_back();
  int pos = 1;
  while(2*pos <= v.size()-1 && (v[pos] > v[2*pos] || v[pos] > v[2*pos+1])){ //downheap
    int posMin = 2*pos;
    if(v[posMin] > v[2*pos+1]) posMin = 2*pos+1; //menor de los hijos
    int aux = v[pos]; // swap
    v[pos] = v[posMin];
    v[posMin] = aux;
    pos = posMin;
  }
}

int PriorityQueueHeap::size(){
  return v.size()-1;
}

bool PriorityQueueHeap::empty(){
  if (v.size() <= 1) return true;
  else return false;
}

void PriorityQueueHeap::print(){
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}

void PriorityQueueHeap::HeapSort(){
  std::vector<int> aux;
  while(!empty()){
    aux.push_back(top());
    pop();
  }
  v = aux;
}
