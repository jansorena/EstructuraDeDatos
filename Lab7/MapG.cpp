#include <bits/stdc++.h>
#include "MapG.h"
using namespace std;

/***************************** funciones auxiliares ****************************/

int functionHash(const string& s, int size){
	int pos = 0;
    int a = 127;
    for (int i = 0; i < s.length(); i++){
        pos = (a*pos + s[i]) % size;
    }
    return pos;
}

void MapG::rehashing(vector<pair<string,int>> &v){
	vector<pair<string,int>> aux(2 * v.size()); // nuevo vector del doble de tamaño
	for (int i = 0; i < v.size(); i++){ // ingresar los valores al nuevo vector
		if(v[i].first != "\0"){
			int pos = functionHash(v[i].first,aux.size());
			while(true){
				if(aux[pos].first == "\0"){
					aux[pos] = make_pair(v[i].first,v[i].second);
					break;
				}
				pos = (pos+1) % aux.size();
			}
		}
	}
	v = aux;
}

void MapG::print(){
 	printf("colisions: %d\n",colisions);
	for (int i = 0; i < v.size(); i++){
        if(v[i].first != "\0" || v[i].first != "@"){
		   printf("pos: %d | value: %d | ",i,v[i].second);
           cout << "key: " << v[i].first << endl;
        }
	}
}
/*******************************************************************************/

MapG::MapG(){ v = vector<pair<string,int>>(1000); } // tamaño de la tabla hash

MapG::~MapG(){} // destructor

void MapG::insert(const string &s, int n){
	int pos = functionHash(s,v.size());
	while(true){
		if(v[pos].first == s) break; // no admite claves duplicadas
		if(v[pos].first == "\0"){
			v[pos] = make_pair(s,n);
			sizeMap++;
			break;
		}
		pos = (pos+1) % v.size();
        colisions++;
	}
	if(sizeMap > v.size()/2) rehashing(v);
}

void MapG::erase(const string &s){
	int pos = functionHash(s,v.size());
	while(true){
		if(v[pos].first == s){ // borrado logico
			v[pos].first = "@";
			v[pos].second = 0;
			sizeMap--;
			break;
		}
		if(v[pos].first == "\0") break; // no se encuentra el elemento
		pos = (pos+1) % v.size(); // siguiente posicion
	}
}

int MapG::at(const string &s){
	int pos = functionHash(s,v.size());
	while(true){
		if(v[pos].first == s) return v[pos].second;
		if(v[pos].first == "\0") return 0;
		pos = (pos+1) % v.size();
	}
}

bool MapG::empty(){
	if(sizeMap == 0) return true;
	else return false;
}

int MapG::size(){ return sizeMap; }