//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> v) 
    {
        // Code here.
        int n=0;
        for(auto &i: v) {
            n=n^i;
        }
        int fbit=0,o=0,d=n;
        // fbit=d&1;
        while(fbit!=1){
            fbit=d&1;
            o++;
            d=d>>1;
        }
        int n1=0;
        int pos=o-1;
        for(auto &i: v){
            if((i & (1<<pos)) != 0){
                n1=n1^i;
            }
        }
        int sol1=n^n1;
        return {min(sol1,n1),max(sol1,n1)};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends