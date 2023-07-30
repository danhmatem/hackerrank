#include <iostream>
#include  <cmath>
#include <vector>
 
 using namespace std;

 int binarySearch (const vector <int> &arr, int l, int r, int k){
    while (l <= r){
        int mid = l + (r - l)/2;
        if (arr[mid] == k){
            return mid;
        }else if (arr[mid] > k){
            return binarySearch( arr, mid + 1, r, k );
        } else {
            return binarySearch(arr, l, mid - 1, k);
        }
    }
    return -1;
 }
 int main()
 {
    vector <int> arr = {0,1,2,3,4,6,7,10,15};
    int k = 4;
    int result = binarySearch(arr, 0, arr.size() - 1, k);
    if (result != 1){
        cout << result;
    }else {
        cout << "The Number given does not exist !";
    }
 }