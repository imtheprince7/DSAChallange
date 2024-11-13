#include<bits/stdc++.h>
using namespace std;

template <typename T>
T getMax(T x , T y){
    return x > y ? x :y;
}

int main(){
    int a = 100, b = 990;
    cout<< getMax<int>(a,b)<<endl;

    return 0;
}