#include <unordered_map>
using namespace std;

int maxFrequencyElement(int arr[], int n){
  unordered_map<int ,int> freq;
for(int i=0; i< n; i++)(
  freq[arr[i]]++;
}
int maxFreq=0;
int result= arr[o];
for(int i=0; i<n; i++){
if( freq[arr[i]]> maxfreq){
maxfreq=  freq[arr[i]];
result= arr[i];
}}
return result;
}
