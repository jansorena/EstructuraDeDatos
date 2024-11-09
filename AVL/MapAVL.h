#include <string>
#include "Map.h"

#ifndef MAPAVL_H
#define MAPAVL_H

struct nodo{
    std::pair<std::string,int> tree;
    int altura;
    nodo *Padre, *hijoD, *hijoI;
};

class MapAVL : public Map{
    private:
        nodo *root;
        int tam;
        void balanceo(nodo *v);
        void balancear(nodo *v, int l, int r);
        void rotate(nodo *z, nodo *y, nodo *x, int caso);
        void mod_altura(nodo *v);
        void destructor(nodo *v);
        nodo *get_sucessor(nodo *v);
        nodo *minimun(nodo *v);
        bool isInternal(nodo *v);
        void removeExternal(nodo *v);
    public:
        MapAVL();
        ~MapAVL();
        void insert(const std::string&, int);
        void erase(const std::string&);
        int at(const std::string&);
        int size();
        bool empty();
        void printnode();
};
#endif