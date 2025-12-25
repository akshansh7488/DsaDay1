#include <unordered_map>
using namespace std;

unordered_map<int, int> countFrequency(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    return freq;
}
