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
    for (int i =0 ; i < n; i ++){
        cin >> v[i];
    }
    int pos;
    cin >> pos;
    v.erase(v.begin()+ pos -1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() - 1 + a, v.begin() - 1 +b);
    cout << v.size() << endl;
    for (int i : v){
        cout << i << " ";
    }
    return 0;
}
