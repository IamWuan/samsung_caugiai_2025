/*
Có N người xếp hàng với N cái tên phân biệt. Người ta muốn xếp một người duy nhất luôn đứng ở cuối hàng. Hãy liệt kê tất cả các cách xếp hàng thoả mãn theo thứ tự từ điển.

Input

Dòng đầu ghi số N (1 < N < 10) là số người xếp hàng

Dòng 2 ghi N cái tên khác nhau từng đôi một, mỗi cái tên là một dãy ký tự độ dài không quá 30 và không có khoảng trống.

Dòng 3 ghi tên người luôn đứng cuối hàng. Dữ liệu đảm bảo tên của người đứng cuối luôn có trong danh sách ở dòng 2. 

Output

Ghi ra danh sách tất cả các cách xếp hàng theo thứ tự từ điển tăng dần.

Ví dụ
Input
4
DONG TAY NAM BAC
NAM
Output
BAC DONG TAY NAM
BAC TAY DONG NAM
DONG BAC TAY NAM
DONG TAY BAC NAM
TAY BAC DONG NAM
TAY DONG BAC NAM

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
    int n;
    cin >> n;
    
    vector<string> names(n);
    for(int i = 0; i < n; i++){
        cin >> names[i];
    }
    
    string lastP;
    cin >> lastP;
    
    vector<string> remain;
    for(int i = 0; i < n; i++){
        if(names[i] != lastP){
            remain.push_back(names[i]);
        }
    }
    
    sort(remain.begin(), remain.end());
    
    do {
        for(int i = 0; i < remain.size(); i++){
            cout << remain[i];
            if(i < remain.size() - 1) cout << " ";
        }
        cout << " " << lastP << endl;
    } while(next_permutation(remain.begin(), remain.end()));
    
    return 0;
}