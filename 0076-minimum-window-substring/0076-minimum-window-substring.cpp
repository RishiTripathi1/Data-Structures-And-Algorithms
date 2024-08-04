class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n < m ) return "";

        unordered_map<char,int>mp;
        for(auto it: t){
            mp[it]++;
        }
        int minstart=0,minlength=INT_MAX;
        int i=0,j=0,cnt=mp.size();
        while(j<s.size()){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) cnt--;
            }

            if(cnt==0){
                while(cnt==0){
                    if(mp.find(s[i]) != mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]==1) cnt++;
                    }

                    if(j-i+1 < minlength){
                        minlength = j-i+1;
                        minstart=i;
                    }
                    i++;
                }
            }
            j++;
        }

        if(minlength==INT_MAX) return "";
        return s.substr(minstart,minlength);
    }
};