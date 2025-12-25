#include <climits>

// Find second largest element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

int secondLargest(int arr[], int n) {
    if(n < 2) return -1;

    int maxVal = arr[0];
    int secondMax = INT_MIN;

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            secondMax = maxVal;
            maxVal = arr[i];
        }
        else if(arr[i] < maxVal && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN) return -1;
    return secondMax;
}
