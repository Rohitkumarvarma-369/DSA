// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int minval = (n<m)? n:m;
        
        set<int> st;
        
        for(int i=0;i<minval;i++){
            st.insert(a[i]);
            st.insert(b[i]);
        }
        if(n>m){
            for(int i=m;i<n;i++){
                st.insert(a[i]);
            }
        }
        else if(m>n){
            for(int i=n;i<m;i++){
                st.insert(b[i]);
            }
        }
        return st.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends