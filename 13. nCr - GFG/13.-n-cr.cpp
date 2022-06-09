// { Driver Code Starts
// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{
    public:
    //Function to return nCr mod 10^9+7 for given n and r. 
int nCrModp(int n, int r) 
    { 
      
      // your code here
      if(n<r) return 0;
      int dp[n+1][r+1];
      for(int i=1;i<=n;i++) {dp[i][1]=i;dp[i][0]=1;}
      for(int i=1;i<=r;i++) dp[i][i]=1;
      
      for(int i=3;i<=n;i++)
          for(int j=2;j<=r;j++)
              if(i>j)
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%1000000007;
      return dp[n][r];
    } 
};

// { Driver Code Starts.
// Driver program 
int main() 
{ 
  int t, n, r;
  
  //taking count of testcases
  cin >> t;
  
  while(t--){
      
      //taking n and r
      cin >> n >> r;
      Solution ob;
      //calling method nCrModp()
      cout << ob.nCrModp(n, r) << endl;
  }
  
  return 0; 
}
  // } Driver Code Ends