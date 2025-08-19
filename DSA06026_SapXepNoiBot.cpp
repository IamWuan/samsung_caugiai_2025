/*


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
    int n, count = 1;
    bool test = false;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j-1] > a[j]) {
                swap(a[j-1], a[j]);
                test = true;
            }
        }

        if(test){
        cout << "Buoc " << count++ << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
        }
        test = false;
    }
    

}