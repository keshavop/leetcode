class Solution
{
public:
    int countDigit(int a)
    {
        int count = 1;
        while ((a = a / 10) != 0)
        {
            count++;
        }
        return count;
    }
    
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (int i:nums)
        {
            if (countDigit(i) % 2 == 0)
                ans++;
        }
        return ans;
    }
};