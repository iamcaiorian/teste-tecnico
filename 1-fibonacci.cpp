#include <iostream>
using namespace std;

bool isFibonacci(int num) {
    int a = 0, b = 1, temp;
    if (num == a || num == b) return true;
    
    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }
    
    return num == b;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    
    if (isFibonacci(num))
        cout << num << " pertence à sequência de Fibonacci.\n";
    else
        cout << num << " não pertence à sequência de Fibonacci.\n";
    
    return 0;
}
