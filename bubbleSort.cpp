#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for (int i=0; i<n; i++){
        cout << arr[i] << " ,";
    }
}

int sort(int *arr, int n) {
    for (int i=0; i < n; i++) {
        for (int j=0; j < n-i; j++){
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    printArr(arr, n);
    return 0;
}

int main() {
    int arr[] = {2,3,7,4,8,1,5,9,6};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, n);
}