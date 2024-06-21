//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        int a=0, b=0, c=0,d=0, slash1=0, slash2=0, comma=0;
        int n=str.size();
        for(int i=0; i<n; ++i){
            if(isdigit(str[i])){
                if(slash1==0){
                    a=a*10+(str[i]-'0');
                }else if(slash1==1 && comma==0){
                    b=b*10+(str[i]-'0');
                }else if(slash1==1 && comma==1 && slash2==0){
                    c=c*10+(str[i]-'0');
                }else if(slash1==1 && comma==1 && slash2==1){
                    d=d*10+(str[i]-'0');
                }
            }else{
                if(str[i]=='/'){
                    if(slash1==0){
                        slash1=1;
                    }else{
                        slash2=1;
                    }
                }else if(str[i]==','){
                    comma=1;
                }else{
                    continue;
                }
            }
        }
        if(a*d>b*c){
            return (to_string(a)+"/"+to_string(b)); 
        }else if(a*d<b*c){
            return (to_string(c)+"/"+to_string(d));
        }else{
            return "equal";
        }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends