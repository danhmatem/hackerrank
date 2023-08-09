#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >>n;
    map<string,string> myMap;
    for (int i = 0; i < n; i++){
        string name,phone;
        cin >> name >> phone;
        myMap[name] = phone;
        
    }   
    string q;
    while (cin >> q){
        if (myMap.find(q) != myMap.end() ){
            cout << q << "=" << myMap[q] << endl;
        }else{
            cout << "Not found" <<endl;
        }
    }
    return 0;
}
