class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        int pSize = points.size(), qSize = queries.size();
        
        for(int i = 0; i < qSize; i++) {
            int count = 0;
            for(int j = 0; j < pSize; j++) {
                int x = points[j][0]-queries[i][0];
                int y = points[j][1]-queries[i][1];
                
                if(sqrt((x*x) + (y*y)) <= queries[i][2]) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        
        return ans;
    }
};