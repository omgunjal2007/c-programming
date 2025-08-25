#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left]>arr[smallest])
        largest=left;
    if(right < n && arr[right]>arr[largest])
        largest=right;
    if (largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildMaxHeap(int arr[],int n){
    for (int i = n/2 - 1; i >=0; i--){
        heapify(arr, n, i);
    }
}
void printArray(int arr[],int n){
    for(int i =0; i< n; i++)
        cout << arr[i] << " ";
     cout << endl;
}
int main() {
    int arr[] = {10, 20, 15, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "original array:\n";
    printArray(arr, n);

    buildMaxHeap(arr, n);

    cout << "Max Heap:\n";
    printArray(arr, n);
       return 0;}
