class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size(), n = grid[0].size(), steps = 0;
        vector<int> arr;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        int mid = (m*n)/2;
        int midval = arr[mid];
        for(int i = 0; i < arr.size(); i++){
            int d = abs(arr[i] - midval);
            if(d%x != 0) return -1;
            else{
                steps += d/x;
            }
        }
        return steps;
    }
};