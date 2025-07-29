#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
using namespace std;

int main(){
    long long int max = -10;
    while (!cin.eof()) {
        long long int x;
        cin >> x;
        if (x > max) {
            max = x;
        }
    }
    cout << max;
}