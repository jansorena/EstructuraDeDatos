#include "ListADT.h"

#ifndef ARRAYLIST
#define ARRAYLIST

class ArrayList : public List{
    private:
        int tam, tamArray;
        int *array;
    public:
        ArrayList(int n);
        ~ArrayList();
        void insert(int n);
        void pop();
        int at(int n);
        int size();
        void printList();
};

#endif