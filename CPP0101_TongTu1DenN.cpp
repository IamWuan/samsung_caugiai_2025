#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        long long int n;
        cin >> n;
        cout << (n * (n + 1)) / 2 << endl;
    }
}