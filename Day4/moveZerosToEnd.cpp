void moveZerosToEnd(int arr[], int n) {
    int l = 0;
    for (int r = 0; r < n; r++) {
        if (arr[r] != 0) {
            swap(arr[l], arr[r]);
            l++;
        }
    }
}
