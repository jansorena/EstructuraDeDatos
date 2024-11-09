#include<string>
#ifndef MAP
#define MAP

class Map{
public:
    virtual void insert(const std::string&, int) = 0;
    virtual void erase(const std::string&) = 0;
    virtual int at(const std::string&)=0;
    virtual int size()=0;
    virtual bool empty()=0;
};

#endif