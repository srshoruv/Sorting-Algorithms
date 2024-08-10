#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void sort(int *arr, int n){

    for (int i=1; i<n; i++){
        int curr = arr[i]; // current element
        int prev = i-1; // previous index

        while (prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]);
            prev --;
        }
        curr = arr[prev+1];
    } 
    printArr(arr, n);
}

int main(){

    int arr[] = {2,7,1,5,4,3,8,6,9};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, n);

}