#include<bits/stdc++.h>
using namespace std;

 class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_set<int> seen;
        for(int i=0; i<arr.size(); i++){
            if(seen.find(arr[i]) != seen.end()){
                return true;
            }
            seen.insert(arr[i]);
            
             if (i >= k) {
                seen.erase(arr[i - k]);
            }
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 1, 2, 3, 4};
    cout<<solution.checkDuplicatesWithinK(arr, 3);
    return 0;
}