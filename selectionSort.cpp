#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for (int i=0; i<n; i++){
        cout << arr[i] << " ,";
    }
}

void sort(int *arr, int n) {
    for (int i=0; i<n; i++){
        int minIdx = i;
        for (int j=i+1; j < n; j++){
            if ( arr[j] < arr[minIdx]) {
                minIdx = j;
            }
            
        } swap(arr[i], arr[minIdx]);
    } printArr(arr, n);
}

int main(){
    int arr[] = {2,3,7,4,8,1,5,9,6};
    int n = sizeof(arr)/sizeof(int);
    
    sort(arr,n);
}