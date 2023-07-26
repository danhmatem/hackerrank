#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n], b[n+1];
    int cnt = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for (int  i = 0; i < n + 1 ; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n +1 ; i++){
        for (int j = 0; j < n; j++){
            if(b[i] == a[j]){
                cnt = 1;
                break;
            }
            cnt = 0;
        }
        if (cnt == 0) cout << b[i];
    }
    
    return 0;
}
