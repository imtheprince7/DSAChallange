#include <iostream>
#include<unordered_map>
using namespace std;

// TC : O(N)  && Space_complexity: O(1)  :- OPTIMAL_SOLUTION
bool areOccurrencesEqual(string str) {
    int freq [26] = {0};   
    for( char ch : str){   
        freq[ch -'a']++;
     }
// Now find first non-zero freq though-out the array.
     int value = 0;
     for(int i=0; i<26; i++){
        if(freq[i] >0){
            value = freq[i];
            break;
        }
     }
// Now check that all "Character" freq is same or not 
// If not same then return FALSE or return TRUE

     for(int i=0; i<26; i++){
        if(freq[i]>0 && freq[i] !=value )
        return false;
     }
     return  true;
}


// TC : O(N)  && Space_complexity: O(1)  :- OPTIMAL_SOLUTION
bool areOccurrencesEqual_Second_Approach(string str) {
   unordered_map<char, int> map;
    for( char ch : str){   
        map[ch]++;
     }
// Now find first non-zero freq though-out the array.
     
     int value = map.begin()->second;
// Now check that all "Character" freq is same or not 
// If not same then return FALSE or return TRUE

     for(auto entry : map){
        if(entry.second !=value )
            return false;
     }
     return true;
}


int main(){
    string str = "abacbc";
   cout<<areOccurrencesEqual(str);

   cout<<areOccurrencesEqual_Second_Approach(str);
    return 0;
}