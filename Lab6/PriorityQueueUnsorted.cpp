#include "PriorityQueueUnsorted.h"
#include <bits/stdc++.h>

PriorityQueueUnsorted::PriorityQueueUnsorted(){}
PriorityQueueUnsorted::~PriorityQueueUnsorted(){}

void PriorityQueueUnsorted::push(int n){
  v.push_back(n);
}

int PriorityQueueUnsorted::top(){
  std::vector<int>::iterator it;
  int min = v[0];
  for (it = v.begin()+1; it != v.end() ; it++) {
    if(*it <= min) min = *it;
  }
  return min;
}

void PriorityQueueUnsorted::pop(){
  int min = v[0];
  int posMin = 0;
  for (unsigned int i = 0; i < v.size(); ++i) {
    if(v[i] <= min) {
      min = v[i];
      posMin = i;
    }
  }
  v.erase(v.begin()+posMin);
}

int PriorityQueueUnsorted::size(){
  return v.size();
}

bool PriorityQueueUnsorted::empty(){
  return v.empty();
}

void PriorityQueueUnsorted::SelectionSort(){
  std::vector<int> aux;
  while(!v.empty()){
    aux.push_back(top());
    pop();
  }
  v = aux;
}


void PriorityQueueUnsorted::print(){
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}
