#include<bits/stdc++.h>
using namespace std;

/* Given an array arr of integers. Find whether three numbers are such that
  the sum of two elements equals the third element. 
  
    Expected Time Complexity: O(n2)
    Expected Auxilary Space: O(1)
  */ 
 
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
         
         if(arr.size()<3)
            return false;
        sort(arr.begin(),arr.end());
        
        for(int i=2; i<arr.size(); i++){
            int low=0, high =i-1;
            
            while(low<high){
                if(arr[low] + arr[high] == arr[i])
                    return true;
                else if(arr[low] + arr[high] > arr[i])
                    high--;
                else
                    low++;
            }
        }
        return false;
    }
};


int main(){
    Solution solution;
    vector<int> arr ={1, 2, 3, 4, 5};
    cout<<solution.findTriplet(arr)<<endl;

    return 0;
}