#include<iostream>
using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        string answer ="";
        for(int i=0; i<address.size(); i++){
            if(address[i] == '.'){
                answer += "[.]";
            }else if (address[i] != '.'){
                answer += address[i];
            }
        }
        return answer;
        
    }
};

int main(){
    Solution solution;
    string str = "255.100.50.0";
    cout<<solution.defangIPaddr(str)<<endl;
    return 0;
}