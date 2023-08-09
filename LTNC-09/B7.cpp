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
    vector <string> list;
    for (int i = 0; i < n; i ++){
        string s;
        cin >> s;
        list.push_back(s);
    }  
    for (string s : list){
        string temp ="";
        for (int i = 0; i < s.size() ; i ++){
            if (i == 0 || i %2 == 0){
                cout << s[i];
            }else{
                temp += s[i];
            }
        }
        cout << " " << temp << endl;
    }
    return 0;
}
