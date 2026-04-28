#include <iostream>
using namespace std;

int main() {
    string username = "admin";
    string password = "1234";

    string inputUser, inputPass;
    int attempts = 3;

    while(attempts > 0){
        cout << "Enter username: ";
        cin >> inputUser;

        cout << "Enter password: ";
        cin >> inputPass;

        if(inputUser == username && inputPass == password){
            cout << "Access Granted\n";
            break;
        }else{
            attempts--;
            cout << "Wrong credentials! Attempts left: " << attempts << endl;
        }
    }

    if(attempts == 0){
        cout << "Access Denied\n";
    }

    return 0;
}