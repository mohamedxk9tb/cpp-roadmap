#include <iostream>
using namespace std;

#define SIZE 100

int stackArr[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE - 1){
        cout << "Stack Overflow\n";
        return;
    }
    stackArr[++top] = value;
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return;
    }
    cout << "Popped: " << stackArr[top--] << endl;
}

void display(){
    if(top == -1){
        cout << "Stack is empty\n";
        return;
    }

    for(int i = top; i >= 0; i--){
        cout << stackArr[i] << endl;
    }
}

int main(){
    int choice, value;

    while(true){
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin >> choice;

        if(choice == 1){
            cin >> value;
            push(value);
        }
        else if(choice == 2){
            pop();
        }
        else if(choice == 3){
            display();
        }
        else{
            break;
        }
    }

    return 0;
}