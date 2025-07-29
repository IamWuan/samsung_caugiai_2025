#include <iostream>
using namespace std;

int m = 1e9 + 7;

long long pow(long long n, long long k) {
    if (k == 0) {
        return 1;
    }
    long long half = pow(n, k / 2);
    if (k % 2 == 0) {
        return (half * half) % m;
    } else {
        return (half * half % m * n) % m;
    }
    
}

int main(){
    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        cout << pow(n, k) << endl;
    }
    
}