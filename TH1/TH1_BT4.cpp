/*
Hệ cơ số 3 chỉ biểu diễn các số sử dụng ba chữ số là 0, 1, 2.
Nhập vào dãy biểu diễn không quá 18 ký tự, hãy kiểm tra xem dãy biểu diễn nào là đúng với hệ cơ số 3.

Input
Dòng đầu là số bộ test, mỗi dòng tiếp theo ghi một dãy biểu diễn cần kiểm tra.

Output
Nếu đúng in ra YES, nếu sai in ra NO.

Ví dụ
Input
3
1214AB
10210221
22222222

Output
NO
YES
YES
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        bool isValid = true;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] < '0' || s[i] >'2'){
                cout << "NO" << endl;
                isValid = false;
                break;
            }
        }
        if(isValid){
            cout << "YES" << endl;
        }
    }
    
}