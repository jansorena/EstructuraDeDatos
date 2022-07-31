#include <bits/stdc++.h>
#include "MapDH.h"
using namespace std;

/***************************** funciones auxiliares ****************************/

int functionHash1(const string& s, int size){
	int pos = 0;
    int a = 127;
    for (int i = 0; i < s.length(); i++){
        pos = (a*pos + s[i]) % size;
    }
    return pos;
}

int functionHash2(const string& s, int size){
	int pos = functionHash1(s,size);
    pos = 997 - pos%997;
    return pos;
}

void MapDH::rehashing(vector<pair<string,int>> &v){
    vector<pair<string,int>> aux(primes[countPrimes]); // nuevo vector del doble de tamaño
    countPrimes++;
	for (int i = 0; i < v.size(); i++){ // ingresar los valores al nuevo vector
		if(v[i].first != "\0" && v[i].first != "@"){
			int pos = functionHash1(v[i].first,aux.size());
            int pos2 = functionHash2(v[i].first,aux.size());
			while(true){
				if(aux[pos].first == "\0"){
					aux[pos] = make_pair(v[i].first,v[i].second);
					break;
				}
				pos = (pos+pos2) % aux.size();
			}
		}
	}
	v = aux;
}

void MapDH::print(){
    printf("colisiones : %d\n",colisions);
 	for (int i = 0; i < v.size(); i++){
        if(v[i].first != "\0" && v[i].first != "@"){
		   printf("pos: %d | value: %d | ",i,v[i].second);
           cout << "key: " << v[i].first << endl;
        }
	}
}
/*******************************************************************************/

MapDH::MapDH(){ v = vector<pair<string,int>>(1009); } // tamaño de la tabla hash

MapDH::~MapDH(){} // destructor

void MapDH::insert(const string &s, int n){
    int pos = functionHash1(s,v.size());
    int pos2 = functionHash2(s,v.size());
	while(true){
		if(v[pos].first == s) break; // no admite claves duplicadas
		if(v[pos].first == "\0"){
			v[pos] = make_pair(s,n);
			sizeMap++;
			break;
		}else{
		    pos = (pos+pos2) % v.size();
            colisions++;
        }
	}
	if(sizeMap > v.size()/2) rehashing(v);
}

void MapDH::erase(const string &s){
    int pos = functionHash1(s,v.size());
    int pos2 = functionHash2(s,v.size());
	while(true){
		if(v[pos].first == s){ // borrado logico
			v[pos].first = "@";
			v[pos].second = 0;
			sizeMap--;
			break;
		}
		if(v[pos].first == "\0") break; // no se encuentra el elemento
		pos = (pos+pos2) % v.size(); // siguiente posicion
	}
}

int MapDH::at(const string &s){
    int pos = functionHash1(s,v.size());
    int pos2 = functionHash2(s,v.size());
	while(true){
		if(v[pos].first == s) return v[pos].second;
		if(v[pos].first == "\0") return 0;
		pos = (pos+pos2) % v.size();
	}
}

bool MapDH::empty(){
	if(sizeMap == 0) return true;
	else return false;
}

int MapDH::size(){ return sizeMap; }