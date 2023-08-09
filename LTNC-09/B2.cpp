#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int iNum;
    double dNum;
    string input;
    // Read and save an integer, double, and String to your variables.
    cin >> iNum >> dNum;
    cin.ignore();
    getline(cin, input);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << iNum + i <<endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << dNum + d << endl;
    // Concatenate and print the String variables on a new line
    string result = s + input;
    cout << result;
    // The 's' variable above should be printed first.

    return 0;
}