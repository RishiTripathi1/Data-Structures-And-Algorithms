class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
            i++;
        }
        return ans;
    }
};