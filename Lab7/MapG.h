#include "ADTMap.h"
#include <string>
#include <vector>
#ifndef MAPG
#define MAPG

class MapG : public ADTMap {
private:
	int sizeMap = 0;
	std::vector<std::pair<std::string,int>> v;
	int colisions = 0;
public:
	MapG();
	~MapG();
	void insert(const std::string&, int);
	void erase(const std::string&);
	int at(const std::string&);
	int size();
	bool empty();
	void print();
	void rehashing(std::vector<std::pair<std::string,int>>&);
};

#endif