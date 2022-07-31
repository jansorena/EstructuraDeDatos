#include <bits/stdc++.h>
#include "Persona.h"
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
using namespace std;

class Estudiante : public Persona{
	private:
		string major;
		int majorDate;
	public:
		Estudiante();
		~Estudiante();
		void setMajor(string major);
		void setMajorDate(int majorDate);
		string getMajor();
		int getMajorDate();
};
#endif