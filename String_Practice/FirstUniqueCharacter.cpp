#include<iostream>
#include<unordered_map>
using namespace std;

// Optimal Solution : TC O(N), Space-Complexity: O(N):
 int FirstUniqueCharacter(string str){
        unordered_map<int, int> map;

        for(char ch : str){
            map[ch]++;
        }
        for(int i=0; i<str.length(); i++){
            if(map[str[i]] == 1)
                return i; 
        }
        return -1;
}

// Optimal Solution : TC O(N), Space-Complexity: O(1):
    

    int FirstUniqueCharacter_OptimalSolution(string str){
       int freq[26] = {0};
        
        for(char ch : str){
            freq[ ch - 'a']++;
        }        
        for(int i = 0; i < str.length(); i++){
            if(freq[str[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }


int main(){
    string str = "leetcode";
    cout<<FirstUniqueCharacter(str)<<endl;
    cout<<FirstUniqueCharacter_OptimalSolution(str)<<endl;

    return 0;
}