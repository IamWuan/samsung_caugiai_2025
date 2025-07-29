/*
Cho N xâu ký tự bao gồm cả chữ số và chữ cái. Các chữ số liên tiếp sẽ tạo ra một số nguyên. Hãy sắp xếp các số tách được theo thứ tự tăng dần.

Chú ý: các chữ số 0 ở đầu nếu có sẽ không được tính. Ví dụ: các chữ số tách ra được là 00234 thì được tính như số 234, nếu là 00000000 thì được tính như số 0.

Input
Dòng đầu ghi số N (không quá 100).

N dòng tiếp theo, mỗi dòng ghi một xâu ký tự, độ dài không quá 100.

Dữ liệu đảm bảo sẽ tách ra được không quá 500 số.  

Output
Ghi ra các số theo thứ tự sắp xếp tăng dần, mỗi số trên một dòng.

Ví dụ

Input
3
A129h
G07bxjq3
aaaaaaa4aaaa

Output
3
4
7
129
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
int main(){
    int T;
    cin >> T;
    vector<long long int> a;

    while(T--){
        string s;
        cin >> s;

        for (long long int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                int num = 0;
                while (i < s.size() && isdigit(s[i]))
                {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
            i--;
            a.push_back(num);
            }
        }
    }
    sort(a.begin(), a.end());
    for (long long int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}
