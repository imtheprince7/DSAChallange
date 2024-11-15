#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size(); // The size of the input array

        int left = 0, right = n - 1; // Pointers to iterate through the array


        // Expand the left pointer as long as the current element is smaller or equal than the next one

        // This means the left part is non-decreasing

        while (left + 1 < n && arr[left] <= arr[left + 1]) {

            ++left;

        }


        // If the whole array is non-decreasing, no removal is needed

        if (left == n - 1) {

            return 0;

        }


        // Expand the right pointer inwards as long as the next element leftwards is smaller or equal

        // This means the right part is non-decreasing

        while (right > 0 && arr[right - 1] <= arr[right]) {

            --right;

        }


        // Calculate the initial length of the subarray that we can potentially remove

        int minSubarrayLength = std::min(n - left - 1, right);


        // Attempt to merge the non-decreasing parts on the left and the right

        for (int l = 0, r = right; l <= left; ++l) {

            // Find the first element which is not less than arr[l] in the right part to merge

            while (r < n && arr[r] < arr[l]) {

                ++r;

            }

            // Update the answer with the minimum length after merging

            minSubarrayLength = std::min(minSubarrayLength, r - l - 1);

        }


        // Return the answer which is the length of the shortest subarray to remove

        return minSubarrayLength;
    }
};

int main(){
    vector<int> arr = {1,2,3,10,4,2,3,5};
    Solution solution;
    cout<< solution.findLengthOfShortestSubarray(arr) <<endl;

    return 0;

}