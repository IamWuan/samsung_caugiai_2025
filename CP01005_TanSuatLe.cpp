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
        int n;
        cin >> n;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            res ^= x;  
        }
        cout << res << endl;
    }
    return 0;
}