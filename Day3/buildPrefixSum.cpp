void buildPrefixSum(int arr[], int prefix[], int n) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}


#RangeSum cpp
int rangeSum(int prefix[], int L, int R) {
    if (L == 0) {
        return prefix[R];
    }
    return prefix[R] - prefix[L - 1];
}
