#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        using ll = long long; // Alias for long long to simplify the code
        int n = nums.size(); // Size of the input array
        unordered_map<int, int> count; // Map to store the frequency of element
        ll sum = 0; // Initialize sum of the current subarray
        // Initialize the window of size k
        for (int i = 0; i < k; ++i) {
            count[nums[i]]++; // Increment the frequency of the current element
            sum += nums[i]; // Add the current element to the sum
        }
        // Initialize answer with the sum of the first window if it contains k unique elements
        ll maxSum = count.size() == k ? sum : 0;
        // Slide the window across the array
        for (int i = k; i < n; ++i) {
            count[nums[i]]++; // Increment frequency of the new element in the window
            sum += nums[i]; // Add new element to current sum
            count[nums[i - k]]--; // Decrement frequency of the oldest element going out of the window
            sum -= nums[i - k]; // Subtract this element from current sum
            // If the oldest element frequency reaches 0, remove it from the count map
            if (count[nums[i - k]] == 0) {
                count.erase(nums[i - k]);
            }
            // Update maxSum if current window contains k unique elements
            if (count.size() == k) {
                maxSum = std::max(maxSum, sum);
            }
        }
        // Return the maximum subarray sum with exactly k unique elements

        return maxSum;
    };


int main(){
    vector<int> nums = {1,5,4,2,9,9,9};
    int k = 3;
    cout<<maximumSubarraySum(nums, k)<<endl;
    return 0;

}