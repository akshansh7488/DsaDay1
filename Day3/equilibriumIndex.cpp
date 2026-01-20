int equilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];   // right sum
        if (leftSum == totalSum) {
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}
