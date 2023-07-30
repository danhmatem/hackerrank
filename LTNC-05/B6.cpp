#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    cin >> Q;
    map <string ,int> Map;
    for (int i = 0; i < Q; i++){
        int type, mark;
        string name;
        cin >> type >> name;
        if(type == 1){
            cin >> mark;
            Map[name] += mark;
        }else if (type == 2){
            Map.erase(name);
        }else if (type == 3){
            auto it = Map.find(name);
            if (it != Map.end()){
                cout << Map[name] << endl;
            }else{
                cout << 0 << endl;
            }
        }
    } 
    return 0;
}



