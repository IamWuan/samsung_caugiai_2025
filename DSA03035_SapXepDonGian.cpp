#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pos[n+1];
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pos[val] = i;
    }
    int maxL = 1, curL = 1;
    for (int i = 1; i < n; i++){
        if (pos[i] < pos[i+1]) {
            curL++;
        } else {
            curL = 1;
        }
        maxL = max(maxL, curL);
    }
    cout << n - maxL << endl;
}

