#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int, int> mp;
        int count = 0 ;
        
        for(int i=0; i<arr.size(); i++){
            int req = target - arr[i];
            
            if(mp.find(req) != mp.end()){
                count += mp[req];  // Adding  frequency of the required value
            }
            // Increment the frequency of the current value in the map
            mp[arr[i]]++;
        }
        return count ;
    }
};

int main(){
    Solution solution;
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;

    cout<< solution.countPairs(arr, target) <<endl; 
    return 0;
}
