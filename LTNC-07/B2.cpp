#include <iostream>
#include <string>

using namespace std;

int main() 
{
    char characters[] = {'a', 'b', 'c', 'd'};
    int numCharacters = sizeof(characters) / sizeof(char);

    for (int i = 0; i < numCharacters; i++) {
        for (int j = 0; j < numCharacters; j++) {
            for (int k = 0; k < numCharacters; k++) {
                string s;
                s += characters[i];
                s += characters[j];
                s += characters[k];
                cout << s<< endl;
            }
        }
    }
}