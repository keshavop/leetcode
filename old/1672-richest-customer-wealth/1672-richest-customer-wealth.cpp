class Solution
{
    public:
        int maximumWealth(vector<vector < int>> &accounts)
        {
            int maxSum = 0;
            for (int i = 0; i < accounts.size(); i++)
            {
                int customerSum = 0;
                for (int j = 0; j < accounts[0].size(); j++)
                {
                    customerSum += accounts[i][j];
                }
                maxSum = max(customerSum, maxSum);
            }
            return maxSum;
        }
};