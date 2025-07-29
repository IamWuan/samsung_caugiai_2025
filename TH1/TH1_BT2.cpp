/*
Cho ba số nguyên dương a, K, N. Hãy liệt kê tất cả các số nguyên dương b thỏa mãn cả hai điều kiện:

a + b ≤ N
a + b chia hết cho K
Input
Chỉ có một dòng ghi ba số nguyên dương theo thứ tự a, K, N (không quá 9 chữ số).

Output
Ghi ra lần lượt các số b tìm được theo thứ tự tăng dần.
Nếu không tìm được số nào in ra -1

Ví dụ

Input
Output

10 1 10
-1

10 6 40
2 8 14 20 26
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    unsigned long long int a{}, k{}, N{};
    cin >> a >> k >> N;
    bool n = false;

    if (N-a<2){
        cout << -1;
        return 0;
    }

    unsigned long long int k1 = (a/k + 1) * k;
    

    for (unsigned long long int i = k1; i <= N; i += k)
    {
        unsigned long long int b = i - a;
        if(b >= 2){
            cout << b << " ";
            n = true;
        }
    }
    if(n == false){
            cout << -1;
    }
}