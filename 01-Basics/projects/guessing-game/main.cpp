#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random

    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100:\n";

    while(true){
        cin >> guess;

        if(guess < randomNumber){
            cout << "Too low!\n";
        }else if(guess > randomNumber){
            cout << "Too high!\n";
        }else{
            cout << "Correct!\n";
            break;
        }
    }

    return 0;
}