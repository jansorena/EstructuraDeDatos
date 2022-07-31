#include <bits/stdc++.h>
#include "Busqueda.h"

using namespace std;

Busqueda::Busqueda(int n) {
	this->vec = new int[n];

	srand(time(NULL));

	for(int i=0;i<n;i++) {
		this->vec[i] = rand() % n + 1;
	}
	this->tam = n;
	sort(this->vec,this->vec + this->tam);


	for(int i=0;i<this->tam;i++) cout<<this->vec[i]<<" ";
	puts("");

}

Busqueda::~Busqueda(){
	delete[] this->vec;
}
int Busqueda::size(){
	return this->tam;
}

int Busqueda::lineal(int num){
	int val = -1;
	for (int i = 0; i < tam; i++) {
		if(vec[i] == num){
			val = i;
			break;
		}
	}
	return val;
}

int Busqueda::binariaRecursiva(int num,int l,int r){
	if(l > r) return -1;

  	int promedio = (l+r)/2;
	int valorCentral = vec[promedio];

	if(num == valorCentral)	return promedio;
	if(num > valorCentral){
		l = promedio + 1;
		return binariaRecursiva(num,l,r);
	}else{
		r = promedio - 1;
		return binariaRecursiva(num,l,r);
	}
}

int Busqueda::binariaIterativa(int num){
	int l = 0, r = tam-1, val = -1;
	while(l <= r){
		int promedio = (r+l)/2, valorCentral = vec[promedio];
		if(num == valorCentral){
			val = promedio;
			break;
		}else if(num > valorCentral){
			l = promedio+1;
		}else r = promedio - 1;
	}
	return val;
}

int Busqueda::binariaRecursiva(int num){
	return binariaRecursiva(num,0,tam-1);
}
