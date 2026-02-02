/*
========================================================
Problem: Longest Subarray with Sum ≤ K
Technique: Variable Sliding Window

Approach:
- Use two pointers (left, right)
- Expand window by adding arr[right]
- If sum > k → shrink from left
- Update maximum length whenever valid

Pattern:
expand → while(invalid) shrink → update answer

Time: O(n)
Space: O(1)
========================================================
*/

int longestSubarray(int arr[], int n, int k) {
    int left = 0;
    int sum = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {

        sum += arr[right];  // expand window

        // shrink if condition breaks
        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        // update answer
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}
