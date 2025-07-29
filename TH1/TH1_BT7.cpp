/*
Cho số nguyên dương P, hãy tìm số nguyên dương N nhỏ nhất mà tích các chữ số của N bằng P.

Input:
Dòng đầu tiên là số lượng bộ test T.

Mỗi test gồm một số nguyên dương P.

Giới hạn:  T ≤ 1000, P ≤ 1015

Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.

Nếu không có đáp án thì in ra -1

Ví dụ:

Input
2
1
10

Output
1
25
*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
using namespace std;
int main(){
    int T;
    cin >> T;

    while (T--)
    {
        long long int p{};
        cin >> p;

        if(p == 0){
            cout << 10 << endl;
            continue;
        }
        if(p == 1){
            cout << 1 << endl;
            continue;
        }

        vector<int> a;
        for (int i = 9; i >= 2; i--)
        {
            while (p % i == 0)
            {
                a.push_back(i);
                p /= i;
            }
        }

        if(p > 1){ //prime
            cout << -1 << 
            endl;
            continue;
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    
}