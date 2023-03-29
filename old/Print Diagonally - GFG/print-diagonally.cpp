//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
	    vector<int> ans;
		for(int j=0;j<n;j++)
		{
		    int k = j;
		    for(int i=0;i<n;i++)
		    {    
		        if(k<0)
		        break;
		        ans.push_back(A[i][k]);
		        k--;
		    }
		}
		for(int i=1;i<n;i++)
		{
		    int k=i;
		    for(int j=n-1;j>=0;j--)
		    {
		        if(k==n) break;
		        ans.push_back(A[k][j]);
		        k++;
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends