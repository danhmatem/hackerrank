#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i =0; i < n; i++){
        cin >> v[i];
    }
    
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int q;
        cin >> q;
        
        auto it = lower_bound(v.begin(), v.end(), q);
        
        if(it != v.end() && *it == q){
            cout << "Yes" << " ";
            cout << it - v.begin() + 1 <<endl;
        }else {
            cout << "No" << " ";
            cout << it - v.begin() + 1 << endl;
        }
        
    }
    return 0;
}
