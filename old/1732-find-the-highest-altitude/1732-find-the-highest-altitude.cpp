class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int currAlt = 0;
        for(auto x: gain){
            currAlt = currAlt + x;
            maxAlt = max(currAlt,maxAlt);
        }
        return maxAlt;
    }
};