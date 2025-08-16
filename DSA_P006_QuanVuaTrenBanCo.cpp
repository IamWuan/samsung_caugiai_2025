/*
Luật chơi cờ vua chắc chắn không xa lạ gì. Trên bàn cờ vua kích thước 8*8 thì quân vua được phép di chuyển đến cả 8 ô liền kề theo cả đường dọc và đường chéo. Tất nhiên quân vua sẽ không thể di chuyển được ra ngoài bàn cờ.

Cho 2 ô trên bàn cờ gọi là ô bắt đầu và ô kết thúc. Hãy tính xem quân vua cần ít nhất bao nhiêu bước để di chuyển từ ô bắt đầu đến ô kết thúc.

Input

Có 2 cặp số nguyên s1,s2 và f1,f2 lần lượt và vị trí ô bắt đầu và ô kết thúc. Các vị trí đảm bảo nằm trong phạm vi bàn cờ.

Output

Số bước đi ít nhất của quân vua

Ví dụ

Input
4 3 1 6 

Output 
3

Input
5 5 5 6

Output
1
*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int s1, s2, f1, f2;
    cin >> s1 >> s2 >> f1 >> f2;
    cout << max(abs(s1 - f1), abs(s2 - f2)) << endl;

}