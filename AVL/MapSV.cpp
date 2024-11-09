#include <bits/stdc++.h>
#include "MapSV.h"
using namespace std;

MapSV::MapSV(){}

MapSV::~MapSV(){}

void MapSV::insert(const string &s, int n){
    auto it = lower_bound(v.begin(), v.end(), make_pair(s,0));

    if (it != v.end() && it->first == s)
        std::cout << "elemento duplicado" << endl;
    else{
        v.insert(it,{s,n});
    }
}

void MapSV::erase(const string &s){
    auto it = lower_bound(v.begin(), v.end(), make_pair(s,0));
    if (it != v.end() && it->first == s) v.erase(it);
}

int MapSV::at(const string &s){
    auto it = lower_bound(v.begin(), v.end(), make_pair(s,0));
    if (it != v.end() && it->first == s) return it->second;
    else return -1;
}

int MapSV::size(){
    return v.size();
}

bool MapSV::empty(){
    if(v.empty()) return true;
    else return false;
}

void MapSV::print(){
    for(auto x: v){
        cout << "key: " << x.first << " " << " value: " << x.second << endl;
    }
}