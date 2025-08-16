/*
Cho xâu ký tự S có N chữ số thập phân. Hãy liệt kê các số khác nhau có K chữ số lấy từ K vị trí khác nhau trong xâu S theo thứ tự từ nhỏ đến lớn.

Input
Dòng đầu ghi số bộ test T (T < 10).
Dòng thứ 2 ghi xâu S sau đó là một khoảng trống rồi đến số K (1 < K < N < 20).

Output
Với mỗi bộ test, ghi ra lần lượt các số khác nhau tạo được theo thứ tự từ nhỏ đến lớn.


Ví dụ

Input
2
1234 2
4444 2

Output
12
13
14
23
24
34
44
*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        
        int n = s.size();
        set<string> ans;
        
        // Generate all combinations of k positions
        vector<bool> v(n, false);
        fill(v.begin(), v.begin() + k, true);
        
        do {
            string num = "";
            for (int i = 0; i < n; i++) {
                if (v[i]) {
                    num += s[i];
                }
            }
            ans.insert(num);
        } while (prev_permutation(v.begin(), v.end()));
        
        for (string x : ans) {
            cout << x << endl;
        }
    }
    
    return 0;
}