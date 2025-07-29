/*
Một số số nguyên dương có thể được biểu diễn thành tổng của các số nguyên dương liên tiếp.

Ví dụ: 6 = 1 +2 + 3 hoặc 9 = 4 + 5 hoặc 9 = 2 + 3 + 4

Cho số nguyên dương N không quá 9 chữ số. Hãy đếm xem có bao nhiêu cách biểu diễn N thành tổng các số nguyên dương liên tiếp.

Input
Dòng đầu ghi số bộ test, không quá 20.
Mỗi bộ test ghi một số nguyên dương N, không quá 9 chữ số.

Output
Ghi ra số cách tìm được.

Ví dụ
Input
3
6
8
9
Ouput
1
0
2
*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        int count{0};
        long long int n, temp{0};
        cin >> n;
        for (int a = 1; a <= n/2; a++)
        {
            for (int b = a; b <= n/2+1; b++)
            {
                temp += b;
                if(temp == n){
                    count++;
                    temp = 0;
                    break; 
                }
            }
        cout << count << endl;
        }
    }
}