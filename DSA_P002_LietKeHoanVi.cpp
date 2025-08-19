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
    int n;
    cin >> n;
    int count = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    
    do {
        count++;
        cout << count << ": ";
        for (int x = 0; x < n; x++){
            cout << arr[x] << " ";
        }

        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
    
    
    


}