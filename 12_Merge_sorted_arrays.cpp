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

    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v1.push_back(x);
    }
    int m;
    cin>>m;

    for(int j=0;j<m;j++){
        int x;
        cin>>x;

        v2.push_back(x);
    }

    int a = n-1;
    int b = 0;

    while(a>=0 && b<m){
        if(v1[a]>=v2[b]){
            swap(v1[a], v2[b]);
            --a;
            ++b;
        }
        else{
            break;
        }
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(auto k: v1){cout<<k<<" ";}
    cout<<endl;
    for(auto k: v2){cout<<k<<" ";}
    cout<<endl;

}