#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
           for(int i=0;i<mat.size();i++){
            for(auto itr : mat[i]){
                if(itr == x){
                    return true;
                }
            }
        }
        
        return false;
    }
};

int main(){
    Solution solution;
    int mat[][] = [[3, 4, 9],[2, 5, 6],[9, 25, 27]];
    int  x = 9

    cout<< solution.searchRowMatrix(mat, X) <<endl;

    return 0;
}