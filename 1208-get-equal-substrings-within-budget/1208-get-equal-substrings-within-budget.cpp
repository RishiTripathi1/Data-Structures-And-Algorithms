class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,maxl=0,cost=0;
        for(int r=0;r<s.size();r++){
            cost += abs(s[r]-t[r]);
            while(cost>maxCost){
                cost-= abs(s[l]-t[l]);
                l++;
            }
            maxl=max(maxl,r-l+1);
        }
        return maxl;
    }
};