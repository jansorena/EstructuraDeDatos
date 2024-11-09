#include "Map.h"
#include <string>
#include <vector>
#ifndef MAPHASH
#define MAPHASH

class MapHash : public Map {
private:
	int sizeMap = 0;
	std::vector<std::pair<std::string,int>> v;
	const int primes[100] = {2017,4049,8081,16111,32077,64381,128389,
							256349,512803,1299827};
	int countPrimes = 0;
	int colisions = 0;
public:
	MapHash();
	~MapHash();
	void insert(const std::string&, int);
	void erase(const std::string&);
	int at(const std::string&);
	int size();
	bool empty();
	void print();
	void rehashing(std::vector<std::pair<std::string,int>>&);
};

#endif