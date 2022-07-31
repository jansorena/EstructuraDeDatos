#include <bits/stdc++.h>
#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante(){}
Estudiante::~Estudiante(){}

void Estudiante::setMajor(string major){
	this->major = major;
}
void Estudiante::setMajorDate(int majorDate){
	this->majorDate = majorDate;
}
string Estudiante::getMajor(){return major;}
int Estudiante::getMajorDate(){return majorDate;}