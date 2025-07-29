#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 2){
        return 1;
    } 
    return fib(n - 1) + fib(n - 2);
}

bool isFib(int x, int i = 1) {
    int f = fib(i);
    if (f == x){
        return true;
    }
    if (f > x){ 
        return false;
    }
    return isFib(x, i + 1);
}

void gen(int n, int k, int s, int a[], int idx, int sum) {
    if (idx == k) {
        if (isFib(sum)) {
            for (int i = 0; i < k; i++) {
                cout << a[i];
                if (i < k - 1){
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    
    for (int i = s; i <= n; i++) {
        a[idx] = i;
        gen(n, k, i+1, a, idx+1, sum+i);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int a[30];
    gen(n, k, 1, a, 0, 0);
    return 0;
}