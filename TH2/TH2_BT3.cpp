/*
Xâu AB là dãy ký tự chỉ bao gồm hai chữ cái A và B.

Hãy liệt kê các xâu AB độ dài N thỏa mãn cả 2 điều kiện:

Có ít nhất 1 ký tự A
Có ít nhất 1 ký tự B
Input
Chỉ có 1 dòng ghi số N (2 < N < 15).

Output
Ghi ra lần lượt các xâu AB thỏa mãn điều kiện theo thứ tự từ điển.

Ví dụ
Input
4

output
AAAB
AABA
AABB
ABAA
ABAB
ABBA
ABBB
BAAA
BAAB
BABA
BABB
BBAA
BBAB
BBBA
*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
using namespace std;

void genString(string current, int n, int pos, vector<string>& result) {
    if (pos == n) {
        bool hasA = false;
        bool hasB = false;

        for (int i = 0; i < current.length(); i++) {
            char c = current[i];
            if (c == 'A') hasA = true;
            if (c == 'B') hasB = true;
        }
        if (hasA && hasB) {
            result.push_back(current);
        }
        return;
    }
    
    genString(current + 'A', n, pos + 1, result);
    genString(current + 'B', n, pos + 1, result);
}

int main(){
    int n;
    cin >> n;
    
    vector<string> result;
    genString("", n, 0, result);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}