#include <iostream>
#include <climits>
using namespace std;

void printArr(int *arr, int n){
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; 
    }
}

void sort(int *arr, int n){
    int freq[10000];
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for (int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArr(arr,n);

}

int main(){
    int arr[] = {2,3,7,4,8,1,5,9,6};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, n);
}