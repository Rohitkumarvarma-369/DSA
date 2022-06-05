/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        for(int i=0;i<floor(vec.size()/2);i++){
            int temp = vec[n-i-1];
            vec[n-i-1] = vec[i];
            vec[i] = temp;
        }
        for(auto item: vec){
            cout<<item<<" ";
        }
        cout<<endl;
    }
}