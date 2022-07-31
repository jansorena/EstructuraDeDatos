#include <bits/stdc++.h>
#include "Persona.h"

using namespace std;

Persona::Persona(){}
Persona::~Persona(){}

string Persona::getName(){
	return name;
}
void Persona::setName(const string &newName){
	name = newName;
}
void Persona::setBirthday(int day, int month, int year){
	this->day = day, this->month = month, this->year = year;
}
int Persona::getBirthDay(){
	return day;
}
int Persona::getBirthMonth(){
	return month;
}
int Persona::getBirthYear(){
	return year;
}