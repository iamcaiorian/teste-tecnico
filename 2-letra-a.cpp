#include <iostream>
#include <string>
using namespace std;

int countLetterA(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Digite uma string: ";
    getline(cin, input);
    
    int count = countLetterA(input);
    cout << "A letra 'a' apareceu " << count << " vezes.\n";
    
    return 0;
}
