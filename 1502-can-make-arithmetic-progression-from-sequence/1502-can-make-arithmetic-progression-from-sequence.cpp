class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size()-1;
        int difference = arr[1] - arr[0];
        
        for(int i=n;i>0;i--){
            if(arr[i] - arr[i-1] !=difference)
                return false;
        }
    return true;
    }
};