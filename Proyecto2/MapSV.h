#include "Map.h"
#include<string>
#include<vector>

#ifndef MAPSV
#define MAPSV

class MapSV : public Map{
private:
    std::vector<std::pair<std::string,int>> v;
public:
    MapSV();
    ~MapSV();
    void insert(const std::string &, int);
    void erase(const std::string&);
    int at(const std::string&);
    int size();
    bool empty();
    void print();
};

#endif