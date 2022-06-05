/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends

//my own logic/code starts from here
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    long long minval = a[0];
    long long maxval = a[0];
    
    for(int i=0;i<n;i++){
        minval = min(minval, a[i]);
        maxval = max(maxval, a[i]);
    }
    p.first = minval;
    p.second = maxval;
    return p;
}