#include <iostream>
using namespace std;

long long F[100];
char fibo(int n, long long k) {
    if(n==1){
        return 'A';
    }
    if (n==2) {
        return 'B';
    }
    if (k <= F[n-2]) {
        return fibo(n-2, k);
    } else {
        return fibo(n-1, k - F[n-2]);
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }

    int n;
    long long k;
    cin >> n >> k;
    cout << fibo(n, k) << endl;
    
    }
}