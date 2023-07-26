#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin >> n >> q;
    vector<vector<int>> arrays(n);
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        
        arrays[i].resize(k);
        
        for (int j = 0; j < k; j++){
            cin >> arrays[i][j];
        }
        
    }
    for (int k = 0; k < q; k ++){
        int i,j;
        cin >> i >> j;
        cout << arrays[i][j] << endl;
    }
    return 0;
}
