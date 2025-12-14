// Find maximum element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
