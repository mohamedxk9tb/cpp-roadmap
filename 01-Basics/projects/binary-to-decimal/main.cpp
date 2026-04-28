#include <iostream>
using namespace std;

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1; // 2^0

    while(binary > 0){
        int lastDigit = binary % 10;
        decimal += lastDigit * base;

        binary /= 10;
        base *= 2;
    }

    cout << "Decimal = " << decimal;

    return 0;
}