/*
Cho dãy số A[] có n phần tử. Hãy sắp xếp các số chẵn trong dãy theo thứ tự tăng dần và các số lẻ theo thứ tự giảm dần.

In ra dãy kết quả đã sắp xếp trong đó vị trí số chẵn và vị trí số lẻ không thay đổi so với dãy ban đầu.

Input
Dòng đầu ghi số n (1 < n ≤ 1000)
Các dòng tiếp theo ghi đủ n số của dãy A[], các số đều nguyên dương và không quá 1000.

Output
Ghi ra dãy kết quả đã sắp xếp trong đó các vị trí của số chẵn và số lẻ không thay đổi.

Ví dụ

Input
10
1 2 3 4 5 6 7 7 9 6

Output
9 2 7 4 7 6 5 3 1 6
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <functional>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1001];
    vector <int> chan;
    vector <int> le;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            chan.push_back(a[i]);
        }
        else
        {
            le.push_back(a[i]);
        }
    }
    sort(chan.begin(), chan.end());
    sort(le.begin(), le.end(), greater<int>());

    int chanPos = 0, lePos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << chan[chanPos++] << " ";
        }
        else
        {
            cout << le[lePos++] << " ";
        }
    }
    
    
    
}