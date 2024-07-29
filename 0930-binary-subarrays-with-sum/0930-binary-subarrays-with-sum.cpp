class Solution {
public:
    int sw(vector<int>&nums, int goal){
        if(goal<0) return 0;
        int l=0,cnt=0,sum=0;
        for(int r=0;r<nums.size();r++){
            sum+= nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            cnt+= r-l+1;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return sw(nums,goal)-sw(nums,goal-1);
    }
};