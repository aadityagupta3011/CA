// Give an array [4, 10, 3, 5, 1];
// perform Heap Sort step-by-step and print sorted output
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if(right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if(largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {

    // build max heap
    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // heap sort
    for(int i = n-1; i > 0; i--) {

        // swap
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;

    heapSort(arr, n);

    // print
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}