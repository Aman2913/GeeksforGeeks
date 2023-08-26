//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	     vector<int> v,ans;
    for(int i=0;i<n;i++)
    {
        v.push_back(arr[i]);
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
    {
        int index=lower_bound(v.begin(),v.end(),arr[i])-v.begin();
        ans.push_back(index);
        v.erase(v.begin()+index);
    }
    
    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends