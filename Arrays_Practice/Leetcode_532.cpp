#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i] + k) != mp.end())
                ans += mp[nums[i] + k];
        }
        return ans;
    }
};



int main(){
    vector<int> arr  = {3,1,4,1,5};
    Solution solution;
    cout<<solution.findPairs(arr, 2)<<endl;

    return 0;
}