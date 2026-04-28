#include <iostream>
using namespace std;

#define SIZE 5

int q[SIZE];
int front = -1;
int rear = -1;

// Check if full
bool isFull(){
    return (front == 0 && rear == SIZE-1) || (rear + 1) % SIZE == front;
}

// Check if empty
bool isEmpty(){
    return front == -1;
}

// Enqueue
void enqueue(int value){
    if(isFull()){
        cout << "Queue is Full\n";
        return;
    }

    if(front == -1) front = 0;

    rear = (rear + 1) % SIZE;
    q[rear] = value;

    cout << "Inserted: " << value << endl;
}

// Dequeue
void dequeue(){
    if(isEmpty()){
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Removed: " << q[front] << endl;

    if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % SIZE;
    }
}

// Display
void display(){
    if(isEmpty()){
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";

    int i = front;
    while(true){
        cout << q[i] << " ";
        if(i == rear) break;
        i = (i + 1) % SIZE;
    }

    cout << endl;
}

int main(){
    int choice, value;

    while(true){
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cin >> choice;

        if(choice == 1){
            cin >> value;
            enqueue(value);
        }
        else if(choice == 2){
            dequeue();
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