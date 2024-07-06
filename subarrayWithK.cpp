#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int longestSubarrayWithSumK(const vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumIndex;
    int maxLength = 0;
    int prefixSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];

        if (prefixSum == k) {
            maxLength = i + 1;
        } else if (prefixSumIndex.find(prefixSum - k) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[prefixSum - k]);
        }

        if (prefixSumIndex.find(prefixSum) == prefixSumIndex.end()) {
            prefixSumIndex[prefixSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int result = longestSubarrayWithSumK(nums, k);

    cout << "Length of longest subarray with sum " << k << ": " << result << endl;

    return 0;
}

