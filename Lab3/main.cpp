#include <bits/stdc++.h>
#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

int main(){
	Estudiante *e = new Estudiante();
	e->setName("Juanito Perez");
	e->setBirthday(24,2,2002);
	e->setMajor("Ingenieria Informatica");
	Persona *p = (Persona*)e;
	cout << p->getName() << endl;
	return 0;
}