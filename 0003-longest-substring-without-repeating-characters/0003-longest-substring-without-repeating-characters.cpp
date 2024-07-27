class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl=0,l=0;
        unordered_map<char,int>mp;
        for(int r=0;r<s.size();r++){
            char ch = s[r];
            mp[ch]++;

            while(mp[ch]>1){
                char left = s[l];
                mp[left]--;
                l++;
            }
            maxl=max(maxl,r-l+1);
        }
        return maxl;
    }
};