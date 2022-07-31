#include <bits/stdc++.h>
#include "ArrayList.h"
using namespace std;

ArrayList::ArrayList(int tamArray){
    array = new int[tamArray];
    tam = 0;
    this->tamArray = tamArray;
}
ArrayList::~ArrayList(){
    delete[] array;
}

void ArrayList::insert(int n){ // se duplica el tamano del array si es menor al numero de elementos
    if(tam >= tamArray){
        tamArray *= 2;
        int *aux_array = new int[tamArray];
        for (int i = 0; i < tam; i++) aux_array[i] = array[i];
        delete[] array;
        array = aux_array;
    }
    for (int i = tam; i>0; i--) array[i] = array[i-1]; // desplazar en una posicion a la derecha
    array[0] = n;
    tam++;
}

void ArrayList::pop(){ tam--; } // solo se reduce el tamano del array al ser O(1)

int ArrayList::at(int n){
    if(n>tam) return -1;
    else return array[n];
}

int ArrayList::size(){ return tam; }

void ArrayList::printList(){
    for (int i = 0; i < tam; i++) cout<<array[i]<<" ";    
    cout << endl;
}