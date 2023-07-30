#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    cin >> Q;
    set <int> Set;  
    for (int i = 0; i < Q; i++){
        int type, x;
        cin >> type >> x;
        
        if (type == 1){
            Set.insert(x);
        }else if (type == 2){
            Set.erase(x);
        }else if (type == 3){
            if(Set.find(x) != Set.end()){
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}



