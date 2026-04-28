#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// Insert at beginning
void insertFront(int value){
    Node* newNode = new Node{value, head};
    head = newNode;
}

// Insert at end
void insertEnd(int value){
    Node* newNode = new Node{value, nullptr};

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

// Delete by value
void deleteValue(int value){
    if(head == nullptr) return;

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr && temp->next->data != value){
        temp = temp->next;
    }

    if(temp->next != nullptr){
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}

// Search
bool search(int value){
    Node* temp = head;

    while(temp != nullptr){
        if(temp->data == value) return true;
        temp = temp->next;
    }

    return false;
}

// Reverse
void reverseList(){
    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

// Display
void display(){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){
    insertFront(10);
    insertEnd(20);
    insertEnd(30);

    display();

    deleteValue(20);
    display();

    reverseList();
    display();

    cout << "Search 10: " << (search(10) ? "Found" : "Not Found") << endl;

    return 0;
}