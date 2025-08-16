/*
Số lượng máy tính ở các phòng thực hành nhà A3 tăng lên nhanh chóng. Để gán mã cho các máy tính của PTIT người ta sử dụng mã gồm 2*N ký tự, trong đó:
N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A.
N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau).
Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

Input
Chỉ có duy nhất số N (1 < N < 6)

Output
Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

Ví dụ

Input
2

Output
AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22

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
    
    string letter = "";
    for (int i = 0; i < n; i++) {
        letter += (char)('A' + i);
    }
    
    vector<string> result;
    
    do {
        for (int mask = 0; mask < pow(n, n); mask++) {
            string code = letter;
            int temp = mask;
            for (int i = 0; i < n; i++) {
                code+= (char)('1' + temp % n);
                temp/= n;
            }
            result.push_back(code);
        }
    } while (next_permutation(letter.begin(), letter.end()));
    
    sort(result.begin(), result.end());
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}