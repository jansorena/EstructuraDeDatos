#include <bits/stdc++.h>
#ifndef PERSONA_H
#define PERSONA_H
using namespace std;

class Persona{
	protected:
		string name;
		int day,month,year;
	public:
		Persona();
		~Persona();
		string getName();
		void setName(const string &newName);
		void setBirthday(int day, int month, int year);
		int getBirthDay();
		int getBirthMonth(); 
		int getBirthYear();
};
#endif