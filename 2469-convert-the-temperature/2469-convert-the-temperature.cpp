class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double f = celsius * 1.80 + 32.00;
        double k = celsius + 273.15;
            
        vector<double> ans;
        ans.push_back(k);
        ans.push_back(f);
        
    return ans;
    }
};