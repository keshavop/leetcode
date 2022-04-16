class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs =0;
        int max_sum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            cs = cs + nums[i];
            
            max_sum=max(cs,max_sum);

            if(cs<0){
                cs = 0;
            }
        }
        return max_sum;
    }
};