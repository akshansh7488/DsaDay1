void reverseArray(int arr[], int n) {
    int L = 0, R = n - 1;
    while (L < R) {
        swap(arr[L], arr[R]);
        L++;
        R--;
    }
}
