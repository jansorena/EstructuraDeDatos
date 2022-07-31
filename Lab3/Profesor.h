#include <bits/stdc++.h>
#include "Persona.h"
#ifndef PROFESOR_H
#define PROFESOR_H
using namespace std;

class Profesor : public Persona{
    private:
        string name_dep;
        int entrance_year;
    public:
        Profesor();
        ~Profesor();
        void setName_dep(string name_dep);
        void setEntrance_year(int entrance_year);
        string getName_dep();
        int getEntrance_year();
};
#endif