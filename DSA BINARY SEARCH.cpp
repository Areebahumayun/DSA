#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        } 
        else if (x > arr[mid]) {
            low = mid + 1; // Narrow search to the right half
        } 
        else {
            high = mid - 1; // Narrow search to the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[4] = {4, 5, 6, 7}; // Corrected size to 4
    int x = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, x);

    if (result == -1) {
        cout << "Element not found" << endl;
    } 
    else {
        cout << "Element found and index is " << result << endl;
    }
    return 0;
}