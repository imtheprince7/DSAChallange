#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       int ans = 0, sum = 0;
    const unordered_set<int> bannedSet{banned.begin(), banned.end()};

    for (int i = 1; i <= n; ++i){
        if (!bannedSet.contains(i) && sum + i <= maxSum) {
            ++ans;
            sum += i;
        }
      }
    return ans;
  }
};

int main(){
    Solution solution;
    vector<int> banned = {1,6,5};
     int n = 5, maxSum = 6;
     cout<< solution.maxCount(banned, n , maxSum);
     
    return 0;

}