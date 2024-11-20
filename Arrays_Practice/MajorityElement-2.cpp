#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:   
    vector<int> findMajority(vector<int>& arr) {

        int n=arr.size();
        map<int,int> mp;
        
        vector<int> v;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/3){
                v.push_back(it.first);
            }
        }
        return v;
    }
};

int main(){
    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    auto answer = findMajority(arr);
    cout<<answer<<endl;


    return 0;
}