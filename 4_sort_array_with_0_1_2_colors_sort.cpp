/*
Y. Rohit Kumar Varma
@immortal_1 at codeforces and codechef
Amrita VishwaVidyapeetham, Amritapuri campus
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //method-1: Sort and print (Time Complexity: O(NlogN))
        //method-2: Count sort, count the 0's and 1's and then
        //fill the array with the counted values (Time complexity: O(2N))
        //method-3 (Current Method): Dutch National Flag method
        //Place three pointers low, mid and high and maintain 2 logics
        //everything before and at low is 0
        //similarly everything before and at high is 2
        //maintain till mid<=high
        int low = 0, mid = 0, high = n-1;
        
        while(mid<=high){
            switch(a[mid]){
                case 0:
                    swap(a[low++],a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid],a[high--]);
                    break;
            }
        }

    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends