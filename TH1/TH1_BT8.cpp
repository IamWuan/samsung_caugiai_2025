/*
Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho px. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 32. 

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số N, p được viết cách nhau một vài khoảng trống.
T, N, p thỏa mãn ràng buộc : 1≤T≤100; 1≤N≤105; 2≤p≤5000;

Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
3
62  7
76  2
3  5

Output
9
73
0
*/

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
        long long int N, p;
        cin >> N >> p;

        if (N < p) {
            cout << 0 << endl;
            continue;
        }

        int count = 0;
        for (int i = N; i > 0; i--)
        {
            int temp = i;
            while(temp % p == 0) {
                count++;
                temp /= p;
            }
        }
        cout << count << endl;
    }
}