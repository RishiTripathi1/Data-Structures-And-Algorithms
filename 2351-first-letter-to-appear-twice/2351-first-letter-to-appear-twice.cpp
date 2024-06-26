class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(auto it: s){
            mp[it]++;
            for(auto it: mp){
                if(it.second == 2) return it.first;
            }
        }
        return -1;
    }
};