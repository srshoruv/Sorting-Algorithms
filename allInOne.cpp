#include <iostream>
#include <climits>
using namespace std;

void printArr(int *arr, int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1; j++){
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    printArr(arr, n);
}

void selectionSort(int *arr, int n) {
    
    for (int i=0; i<n; i++) {
        
        for (int j=0; j<n-1; j++) { 
            int max = arr[j];
            if (arr[j+1] > max ) {
                swap(arr[j], arr[j+1]);
                max = arr[j+1];
            }
        }
    } printArr(arr, n);
}

void insertionSort(int *arr, int n) {

    for (int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while (prev >=0 && curr > arr[prev]) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        curr = arr[prev+1];
    } printArr(arr, n);

}

void countingSort(int *arr, int n) {
    int freq[10000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i=0; i<n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for (int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for (int i=maxVal, j=n; i>=minVal; i--){
        while(freq[i] < 0) {
            arr[j--] = i;
            freq[i]++;
        }
    } 
    printArr(arr,n);
}

int main(){
    int arr[]= {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr,n);
    countingSort(arr,n);
}