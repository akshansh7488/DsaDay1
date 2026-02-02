/*
========================================================
Problem: Maximum Sum Subarray of Size K
Technique: Fixed Size Sliding Window

Approach:
- First calculate sum of first k elements
- Slide window one step at a time
- Remove left element, add right element
- Track maximum sum

Why efficient?
- Avoids recomputing sum every time
- Reduces O(n*k) → O(n)

Time: O(n)
Space: O(1)
========================================================
*/

int maxSumSubarray(int arr[], int n, int k) {
    int windowSum = 0;

    // sum of first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // slide window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}
