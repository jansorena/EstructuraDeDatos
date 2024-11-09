#include <bits/stdc++.h>
#include "MapSV.h"
#include "MapHash.h"
#include "MapAVL.h"
using namespace std;

string printRandomString(int n, int size){
  char alphabet[26] = {'a','b','c','d','e','f','g','h', 'i', 'j', 'k', 'l', 'm', 'n',
                      	'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
  string res = "";
  for (int i = 0; i < n; i++) res = res + alphabet[rand() % size];
  return res;
}

int main(){
    srand(time(NULL));

    freopen("words.txt","r",stdin);
    freopen("output.txt","w",stdout);
    MapSV *sv = new MapSV;
    MapHash *mh = new MapHash;
    MapAVL *mavl = new MapAVL;

    string s;
    int count = 10000;
    vector<pair<string,int>> pairs;
    double time;

    for (int i = 0; i < 10000; i++){
        cin >> s;
        pairs.push_back({s,(rand()%100)+1});
    }

    //metodo insert
    clock_t start = clock();
    for (int i = 0; i < count; i++){
        sv->insert(pairs[i].first,pairs[i].second);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapSV insert: %.10f\n",time/(double)count);

    start = clock();
    for (int i = 0; i < count; i++){
        mh->insert(pairs[i].first,pairs[i].second);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapH insert: %.10f\n",time/(double)count); 

    start = clock();
    for (int i = 0; i < count; i++){
        mavl->insert(pairs[i].first,pairs[i].second);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapAVL insert: %.10f\n",time/(double)count);   

    //metodo at

    start = clock();
    for (int i = 0; i < count; i++){
        sv->at(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapSV at: %.10f\n",time/(double)count);

    start = clock();
    for (int i = 0; i < count; i++){
        mh->at(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapH at: %.10f\n",time/(double)count); 

    start = clock();
    for (int i = 0; i < count; i++){
        mavl->at(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapAVL at: %.10f\n",time/(double)count);

    // metodo erase
    start = clock();
    for (int i = 0; i < count; i++){
        sv->erase(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapSV erase: %.10f\n",time/(double)count);

    start = clock();
    for (int i = 0; i < count; i++){
        mh->erase(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapH erase: %.10f\n",time/(double)count); 

    start = clock();
    for (int i = 0; i < count; i++){
        mavl->erase(pairs[i].first);
    }
    time = ((double)clock() - start) / CLOCKS_PER_SEC;
    printf("MapAVL erase: %.10f\n",time/(double)count); 

    return 0;
}
