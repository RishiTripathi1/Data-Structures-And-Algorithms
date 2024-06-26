class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int i=0,j=n;

        while(j<2*n){
            ans.push_back(nums[i]);
            i++;
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};