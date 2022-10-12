class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26 , 0);
        for(char c: letters){
            freq[c - 'a']++;
        }
        int ans= 0;
        help(0 , words , score , freq , 0 , ans);
        return ans;
    }
    void help(int idx , vector<string> &words , vector<int> &score , vector<int> &f , int sum , int &ans){
        if(idx == words.size()){
            ans= max(ans , sum);
            return;
        }
        help(idx + 1 , words , score , f , sum , ans);
        vector<int> freq = f;
        int tem = 0;
        for(char c: words[idx]){
            if(freq[c - 'a'] <= 0) return;
            freq[c-'a']--;
            tem += score[c - 'a'];
        }
        sum += tem;
        help(idx + 1 , words , score , freq , sum , ans);
        
    }
    
};