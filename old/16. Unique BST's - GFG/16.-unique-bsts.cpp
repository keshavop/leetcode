// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
       long long dp[1001];
  long long MOD = 1e9+7;
  long long solve(int N)
  {
     if(dp[N]!=-1)
     {
         return dp[N];
     }
     if(N==0 or N==1)
     {
         return dp[N] = 1;
     }
     else
     {
         long long sum=0;
         for(int i=1;i<=N;i++){
             sum = (sum + ((solve(i-1)%MOD)*(solve(N-i)%MOD))%MOD)%MOD;
         }
         return dp[N] = sum;
     }
  }
  int numTrees(int N) 
  {
    memset(dp,-1,sizeof(dp));
    return (int)solve(N);
  }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends