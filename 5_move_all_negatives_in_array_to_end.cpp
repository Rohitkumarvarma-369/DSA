/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int temp[n] = {0};
        int counter = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp[counter] = arr[i];
                ++counter;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp[counter] = arr[i];
                ++counter;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = temp[i];
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends