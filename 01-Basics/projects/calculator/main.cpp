#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float divide(int a, int b){
    if(b == 0){
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int x, y, choice;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Result = " << add(x, y);
            break;
        case 2:
            cout << "Result = " << subtract(x, y);
            break;
        case 3:
            cout << "Result = " << multiply(x, y);
            break;
        case 4:
            cout << "Result = " << divide(x, y);
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}