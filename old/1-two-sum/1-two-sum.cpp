class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            if (a.find(target - nums[i]) != a.end())
            {
                ans.push_back(a[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            a[nums[i]] = i;
        }
        return ans;
    }
};