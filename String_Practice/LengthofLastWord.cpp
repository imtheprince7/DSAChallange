#include<iostream>
using namespace std;
    int findTheLengthofLastWord(string str){
        int i = str.length()-1, countWord =0;

         // Edge-case Trailing Space end of the string
        while(i >=0  && str[i] == ' '){
            i--;
        }
        
        // Now couting the total caracter untill it not hits the space ' '
        while(i>=0 &&  str[i] !=' '){
            countWord++;
            i--;
        }
        return countWord; 
    }

int main(){
    string str = "Hello World";
    cout<<findTheLengthofLastWord(str)<<endl;

    return 0;
}