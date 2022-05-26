// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
        int low = 1;
        int high = x;
        long long int ans = -1;
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            long long int msq = mid * mid;
            if (msq == x)
            {
                return mid;
            }
            else if (msq > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
    return ans; 
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends