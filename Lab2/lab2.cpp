#include <iostream>
using namespace std;

void algoritmo1(int n){
	int A[n],sum[n];
	cout << "algoritmo1: ";
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	for (int i = 0; i < n; i++){
		int aux = 0;
		for (int j = 0; j <= i ; j++){
			aux+=A[j];
		}
		sum[i] = aux;
	}
	//extra
	for (int i = 0; i < n; i++){
		cout << sum[i] << " ";
	}
	cout << endl;
}

void algoritmo2(int n){
	int A[n], sum[n];
	cout << "algoritmo2: ";
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	sum[0] = A[0];
	for (int i = 1; i < n; i++){
		sum[i] = sum[i-1] + A[i];
	}
	//extra
	for (int i = 0; i < n; i++){
		cout << sum[i] << " ";
	}
}

int main(int argc, char const *argv[]){
	cout << "Ingrese el valor de n: ";
	int n;
	cin >> n;
	algoritmo1(n);
	algoritmo2(n);
	return 0;
}

/*

int A [ n ] , sum [ n ]; //1
for ( int i =0; i < n ; i ++) cin >> A [ i ]; // n
for ( int i =0; i < n ; i ++){ // n*i*1
	int aux = 0; // 1
	for ( int j =0; j <= i ; j ++){ // n(n-1)/2 = n*n
		aux += A [ j ]; // 1
	}
	sum [ i ] = aux ; // 1
}

*/
