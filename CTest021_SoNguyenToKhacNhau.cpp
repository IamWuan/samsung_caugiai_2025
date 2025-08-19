#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
#include <iomanip>
#include <set>
using namespace std;

bool checkPrime(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){
    long long int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        int a[1001];
        set<int> prime;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            if (checkPrime(a[i])) {
                prime.insert(a[i]);
            }
        }

        for (int prime : prime) {
            cout << prime << " ";
        }
        cout << endl;
    }
    


}