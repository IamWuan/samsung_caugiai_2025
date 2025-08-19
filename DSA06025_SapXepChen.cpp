/*
Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

Ví dụ:

Input
4

5 7 3 2

Output
Buoc 0: 5

Buoc 1: 5 7

Buoc 2: 3 5 7

Buoc 3: 2 3 5 7

*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
#include <cmath>
#include <iomanip>
#include <set>
using namespace std;


int main(){
    int n, last, count = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Buoc 0: " << a[0] << endl;
    for (int i = 1; i < n; i++)
    {
        last = a[i];
        int j = i;

        while ((j > 0) && (a[j-1] > last)) {
            a[j] = a[j-1];
            j-=1;
        }
        a[j] = last;
        cout << "Buoc " << count++ << ": ";
            for (int k = 0; k < count; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
    }
    
    

}