// { Driver Code Starts
/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int currsum =0;
        int maxsum = arr[0];
        
        for(int i=0;i<n;i++){
            currsum = currsum+arr[i];
            maxsum = max(currsum, maxsum);
            if(currsum<0){currsum=0;}
        }
        
        return maxsum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends