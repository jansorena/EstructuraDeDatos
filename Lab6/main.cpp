#include <bits/stdc++.h>
#include "PriorityQueueUnsorted.h"
#include "PriorityQueueHeap.h"

int main(int argc, char const *argv[]) {

  srand (time(NULL));

  PriorityQueueHeap *pqHeap = new PriorityQueueHeap;
  PriorityQueueUnsorted *pqUnsorted = new PriorityQueueUnsorted;

  int n = 10000;
  double time;
  std::vector<int> input;

  for (int i = 0; i < n; i++) {
    int num = rand() % n;
    input.push_back(num);
  }

  clock_t start = clock();
  for (int i = 0; i < n; i++) {
    pqUnsorted->push(input[i]);
  }
  pqUnsorted->SelectionSort();
  time = ((double)clock() - start) / CLOCKS_PER_SEC;
  printf("SelectionSort: %.10f\n",time);
  //pqUnsorted->print();

  start = clock();
  for (int i = 0; i < n; i++) {
    pqHeap->push(input[i]);
  }
  pqHeap->HeapSort();
  time = ((double)clock() - start) / CLOCKS_PER_SEC;
  printf("HeapSort: %.10f\n",time);
  //pqHeap->print();

  return 0;
}
