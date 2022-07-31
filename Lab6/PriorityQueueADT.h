#ifndef PRIORITYQUEUEADT
#define PRIORITYQUEUEADT

class PriorityQueueADT{
public:
  virtual void push(int) = 0;
  virtual int top() = 0;
  virtual void pop() = 0;
  virtual int size() = 0;
  virtual bool empty() = 0;
  virtual void print() = 0;
};

#endif
