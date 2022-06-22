/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int slow=v[0];
    int fast=v[0];
    
    slow=v[slow];
    fast=v[v[fast]];

    while(slow!=fast){
        slow = v[slow];
        fast = v[v[fast]];
    }
    int temp = v[0];
    while(slow!=temp){
        slow = v[slow];
        temp = v[temp];
    }

    return slow;
}