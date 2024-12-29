#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        
        unordered_set<int> setA(a.begin(), a.end());
        unordered_set<int> setB(b.begin(), b.end());
        vector<int> result;
        
        // Find the intersection of the two sets
        for (int num : setA) {
            if (setB.count(num)) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};



int main(){

    vector<int> arr1 = {1, 1, 1}, arr2 = {1, 1, 1, 1, 1};


}