class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(auto x: word1){
            a = a+x;
        }
        for(auto x:word2){
            b = b+x;
        }
        
        // if a == b then returns 1 i.e. true
        if(a.compare(b)==0){
            return 1;
        }
        
    return 0;
    }
};