/*
========================================================
Problem: Longest Substring Without Repeating Characters
Technique: Sliding Window + HashSet

Approach:
- Use two pointers (left, right)
- Use set to store characters in current window
- If duplicate found → shrink window until removed
- Update max length

Key idea:
We must track entire window, not just two chars

Time: O(n)
Space: O(26) ~ O(1)
========================================================
*/

#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {

    unordered_set<char> st;  // store characters in window

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.size(); right++) {

        // remove duplicates by shrinking window
        while (st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        // add current character
        st.insert(s[right]);

        // update answer
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}
