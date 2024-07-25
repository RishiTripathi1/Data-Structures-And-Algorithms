class Solution {
public:

    int getmax(vector<int>&nums, int start, int end){
        if(end-start==0) return nums[start];
        int dp[end-start+1];
        dp[0]=nums[start];
        dp[1]=max(nums[start],nums[start+1]);
        for(int i=2;i<=end-start;i++){
            dp[i]=max(nums[start+i]+dp[i-2], dp[i-1]);
        }
        return dp[end-start];
    }


    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        return max(getmax(nums,0,n-2),getmax(nums,1,n-1));
    }
};