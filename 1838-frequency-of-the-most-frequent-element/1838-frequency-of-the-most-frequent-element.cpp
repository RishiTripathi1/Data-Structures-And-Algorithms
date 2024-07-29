class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l=0,ans=0,sum=0;
        sort(nums.begin(),nums.end());
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(nums[r]*(r-l+1) - sum > k){
                sum-=nums[l];
                l++;
            }
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};