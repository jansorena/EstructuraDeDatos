#include <bits/stdc++.h>
using namespace std;


int binarySum(int A[],int i,int n)
{
    if (n == 1) return A[i];
    else return binarySum(A,i,n/2) + binarySum(A,i+n/2,n-n/2);
}


int main(int argc, char const *argv[])
{
    int n = 10;
    int A[n] = {1,2,3,4,5,6,7,8,9,10};
    cout << binarySum(A,0,n);
    return 0;
}
