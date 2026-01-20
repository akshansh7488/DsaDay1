int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
