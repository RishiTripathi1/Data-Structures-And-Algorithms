class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans=0;
        for(int i=0;i<t.size();i++){
            if(t[i] == s[ans]) ans++;
        }
        return ans==s.size()?true:false;
    }
};
