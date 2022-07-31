#include <bits/stdc++.h>
using namespace std;

int main(){
    
    queue<char> cola;
    stack<char> pila;

    string palindromo;
    cin >> palindromo;
    
    for (auto &ch : palindromo) {
        cola.push(ch);
        pila.push(ch);
    }
    int count = -1;
    while(!pila.empty()){
        if(pila.top()!=cola.front()) {
            count = 0; 
            break;
        }
        else{
            pila.pop();
            cola.pop();
        }
    }

    if(count == -1) cout << "Es palindromo" << endl;
    else cout << "No es palindromo" << endl;

    
    return 0;
}
