class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int v=0;
        for(auto it: nums){
            v+=it;
            ans.push_back(v);
        }
        return ans;
    }
};