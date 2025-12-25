// Find minimum element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

int findMin(int arr[], int n) {
    int minVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}
