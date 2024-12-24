#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x){
        int n = mat.size(), m = mat[0].size();
         int i=0, j = m-1;
         
	    while(i<n && j>=0){
	        int temp = mat[i][j];
	        if(temp < x)
	            i++;
	        else if(temp >x)
	            j--;
	        else if( temp ==x)
	            return true;
    	}
	    return false;
    }
};


int main(){
    Solution solution;
    int mat[3][3] = [[1, 5, 9], [14, 20, 21], [30, 34, 43]];
    int x = 14;
    cout<< solution.searchMatrix(mat, x) << endll;


    return 0;
}