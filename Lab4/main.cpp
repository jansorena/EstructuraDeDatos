#include <bits/stdc++.h>
#include "LinkedList.h"
#include "ArrayList.h"
using namespace std;

int main(){
	double time;
	int n;
	cout<<"Ingrese numero de repeticiones: ";
	cin >> n, cout << endl;
	
	ArrayList *al = new ArrayList(10);
	LinkedList *ll = new LinkedList;
	
	// insert
	clock_t start = clock();
	for(int i = 0; i < n; i++) al->insert(rand() % n);
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList insert: %.10f\n",time/(double)n);

	start = clock();
	for(int i = 0; i < n; i++) ll->insert(rand() % n);
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList insert: %.10f\n\n",time/(double)n);

	// at
	start = clock();
	for(int i = 0; i < n; i++) al->at(n-1);
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList at: %.10f\n",time/(double)n);

	start = clock();
	for(int i = 0; i < n; i++) ll->at(n-1);
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList at: %.10f\n\n",time/(double)n);

	// pop
	start = clock();
	for(int i = 0; i < n; i++) al->pop();
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("ArrayList pop: %.10f\n",time/(double)n);

	start = clock();
	for(int i = 0; i < n; i++) ll->pop();
	time = ((double)clock() - start) / CLOCKS_PER_SEC;
	printf("LinkedList pop: %.10f\n\n",time/(double)n);

	return 0;
}



