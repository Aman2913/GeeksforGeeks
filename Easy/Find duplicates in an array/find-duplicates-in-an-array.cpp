//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int,int>mpp;
        vector<int>v;
        int flag=0;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second!=1){
                flag=1;
                v.push_back(it.first);
            }
        }
        if(flag==0){
            v.push_back(-1);
            return v;
        }
        else 
           return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends