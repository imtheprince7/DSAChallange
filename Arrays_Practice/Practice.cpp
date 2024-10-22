#include<bits/stdc++.h>
using namespace std;

int printMaxSum(int arr[], int k){
    int currentSum = 0, answer = 0, n = 7;
    //    int arr[] = {2,3,5,2,9,7,1};
    for(int i = 0; i <=n-k; i++){
        for(int j = i; j <= i+2; j++){
            cout<<"CurrentSum Before:   "<<currentSum<<endl;
            currentSum += arr[j];
            cout<<"CurrentSum After:   "<<currentSum<<endl;
        }
        if(answer < currentSum){
                answer = currentSum;
                currentSum =0;
                cout<<"Answer is:   "<<answer<<endl;
            }
    }
    return answer;
}

int main(){
    int arr[] = {2,3,5,2,9,7,1};
    int k = 3;
    cout<<printMaxSum(arr,k)<<endl;
    return 0;
}