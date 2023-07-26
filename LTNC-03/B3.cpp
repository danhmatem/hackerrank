#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hours = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);
    s.erase(0,2);
    s.erase(6,2);
    ostringstream convert;
    if (period == "AM" && hours == 12) {
        hours = 0;
    } else if (period == "PM" && hours != 12) {
        hours += 12;
    }
    string strhours;
    convert << setw(2) << setfill('0') << hours;
    strhours = convert.str();
    return strhours + s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
