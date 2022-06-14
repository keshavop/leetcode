// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
   {
       vector<long long> v(n+1,0);
       v[n]=1;
       for(int i=n-1;i>=0;i--)
       {
           long long x=0,y=0,z=0;
           x=v[i+1];
           if(i+2<=n)
           y=v[i+2];
           if(i+3<=n)
           z=v[i+3];
           v[i]=(x+y+z)%1000000007;
       }
       return v[0];
   }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends