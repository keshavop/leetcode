Naive Approah
```
class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
vector <int> ans;
int temp = 0;
for(auto x:nums){
temp = x*x;
ans.push_back(temp);
}
sort(ans.begin(),ans.end());
return ans;
}
};
```