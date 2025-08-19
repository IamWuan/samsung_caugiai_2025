/*
Cho hai số nguyên không âm a và b. Hãy tính ab.

Nếu kết quả quá lớn hãy chia dư cho 109 + 7.

Input

Gồm không quá 20 bộ test, mỗi test ghi trên một dòng hai số a,b; a không quá 9 chữ số, b không quá 18 chữ số.

Input kết thúc khi a = b = 0

Output

Với mỗi test ghi ra kết quả tính được trên một dòng.

Input
2 3

2 4

3 2

0 0

Output
8

16

9
*/

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

const long MOD = 1000000007;

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main(){
    long long a, b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }
        long long res = power(a, b, MOD);
        cout << res << endl;
    }
}