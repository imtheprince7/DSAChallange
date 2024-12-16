#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
          int i = 0, j = 0,  num = 0; 

        while (i < a.size() && j < b.size()) {
            if (k == 0) {
                return num;
            } else {
                if (a[i] > b[j]) {
                    num = b[j];
                    j++;
                } else if (a[i] <= b[j]) {
                    num = a[i];
                    i++;
                } 
                k--;
            }
        }

        while (k > 0 && i < a.size()) {
            num = a[i];
            i++;
            k--;
        }

        while (k > 0 && j < b.size()) {
            num = b[j];
            j++;
            k--;
        }

        return num;
    }
};

int main(){
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int num = 5;
    Solution solution;
    auto answer = solution.kthElement(a,b,num);
    cout<< answer <<endl;

    return 0;
}
