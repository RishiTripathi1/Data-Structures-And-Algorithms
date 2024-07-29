class Solution {
public:
    int sw(vector<int>&nums,int k){
        if(k<0) return 0;
        int l=0,sum=0,ans=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r]%2;
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            ans+= r-l+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return sw(nums,k)-sw(nums,k-1);
    }
};