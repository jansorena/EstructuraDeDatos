#include <bits/stdc++.h>
#include "Profesor.h"
using namespace std;

Profesor::Profesor(){}
Profesor::~Profesor(){}

void Profesor::setName_dep(string name_dep){
    this->name_dep = name_dep;
}
void Profesor::setEntrance_year(int entrance_year){
    this->entrance_year = entrance_year;
}
string Profesor::getName_dep(){
    return name_dep;
}
int Profesor::getEntrance_year(){
    return entrance_year;
}