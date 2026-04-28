#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}

int findMax(int arr[], int n){
    int mx = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > mx) mx = arr[i];
    }
    return mx;
}

void rotateRight(int arr[], int n, int k){
    k %= n;

    for(int i = 0; i < k; i++){
        int last = arr[n-1];
        for(int j = n-1; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reverseArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Max: " << findMax(arr, n) << endl;

    rotateRight(arr, n, 2);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}