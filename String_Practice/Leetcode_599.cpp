#include<bits/stdc++.h>
using namespace std;


class Solution {
 public:
  vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> ans;
    unordered_map<string, int> restaurantToIndex;
    int minSum = INT_MAX;

    for (int i = 0; i < list1.size(); ++i)
      restaurantToIndex[list1[i]] = i;

    for (int i = 0; i < list2.size(); ++i) {
      const string& restaurant = list2[i];
      if (const auto it = restaurantToIndex.find(restaurant);
          it != restaurantToIndex.cend()) {
        const int sum = it->second + i;
        if (sum < minSum) {
          minSum = sum;
          ans = {restaurant};
        } else if (sum == minSum) {
          ans.push_back(restaurant);
        }
      }
    }
    return ans;
  }

};


int main(){
    Solution solution;
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
    
    auto answer = solution.findRestaurant(list1, list2);
    

    return 0;
}