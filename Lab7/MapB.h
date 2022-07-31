#include "ADTMap.h"
#include <string>
#include <vector>
#ifndef MAPB
#define MAPB

class MapB : public ADTMap {
private:
	int sizeMap = 0;
	int colisions = 0;
	std::vector<std::pair<std::string,int>> v;
public:
	MapB();
	~MapB();
	void insert(const std::string&, int);
	void erase(const std::string&);
	int at(const std::string&);
	int size();
	bool empty();
	void print();
	void rehashing(std::vector<std::pair<std::string,int>>&);
};

#endif