#ifndef ADTMAP
#define ADTMAP

class ADTMap{
public:
	virtual void insert(const std::string&, int)=0; // insertar en el map
	virtual void erase(const std::string&)=0;
	virtual int at(const std::string&)=0;
	virtual int size()=0;
	virtual bool empty()=0;
	virtual void print()=0;
	virtual void rehashing(std::vector<std::pair<std::string,int>>&)=0;
};

#endif