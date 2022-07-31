#include <bits/stdc++.h>
#include "MapB.h"
#include "MapG.h"
#include "MapDH.h"
using namespace std;

int main(){
	srand(time(NULL));
	freopen("words_alpha.txt", "r", stdin); // leer cadenas desde txt
	freopen("output.txt", "w", stdout); // escribir en txt

	MapB *mb = new MapB;
	MapG *mg = new MapG;
	MapDH *mdh = new MapDH;

	string s;
	int count = 1000;
	vector <string> vs;
	vector <pair<string,int>> words;
	// agregar las palabras a un vector
	while(cin >> s) { //
		if(s.length() == 0) break;
		vs.push_back(s);
	}
	// escoger aleatoriamente palabras
	for (int i = 0; i < count; i++){
		int random = rand()%370105;
		int value = rand()%1000;
		words.push_back(make_pair(vs[random],value));
	}

	double time;
	clock_t start = clock();

	for (int i = 0; i < count; i++){
		mb->insert(words[i].first,words[i].second);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
  	printf("mb insert: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mg->insert(words[i].first,words[i].second);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mg insert: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mdh->insert(words[i].first,words[i].second);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mdh insert: %.10f\n",time/(double)count);

 	start = clock();
	for (int i = 0; i < count; i++){
		mb->at(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mb at: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mg->at(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mg at: %.10f\n",time/(double)count);
		
	start = clock();
	for (int i = 0; i < count; i++){
		mdh->at(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mdh at: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mb->erase(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mb erase: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mg->erase(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mg erase: %.10f\n",time/(double)count);

	start = clock();
	for (int i = 0; i < count; i++){
		mdh->erase(words[i].first);
	}
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("mdh erase: %.10f\n",time/(double)count);

	return 0;
}