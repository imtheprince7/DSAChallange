/*  You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. 
    You want to know how many of the stones you have are also jewels.
    Letters are case sensitive, so "a" is considered a different type of stone from "A".
    
    Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

    Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0

*/

#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;


class Leetcode_P771{
    public:
    int numJewelsInStones(string jewels, string stones) {           //      TimeComplexity is O(n*m)  || spaceComplexity: O(1):
        int totalCount = 0;
        for (char stone : stones) {
            for (char jewel : jewels) {
                if (stone == jewel) {
                    totalCount++;
                    break;  // No need to keep checking other jewels once a match is found
                }
            }
        }
        return totalCount;
    }

    int optimalApproach(string jewels, string stones){         //      TimeComplexity is O(N)  || spaceComplexity: O(N):
        unordered_set<char> jew_set(jewels.begin(), jewels.end());
        int totalCount = 0;

        for(char stone : stones){
            if(jew_set.count(stone)){
                totalCount++;
            }
        }

        return totalCount;
    }

};

int main(){
    Leetcode_P771 ll;
    string jewels = "aA", stones = "aAAbbbb";
    int result = ll.numJewelsInStones(jewels, stones);
    
    cout<<result<<endl;
    return 0;

}
