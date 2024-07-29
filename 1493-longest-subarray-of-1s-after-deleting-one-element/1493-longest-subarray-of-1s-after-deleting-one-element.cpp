class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,maxl=0,cnt=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) cnt++;
            while(cnt>1){
                if(nums[l]==0) cnt--;
                l++;
            }
            maxl=max(maxl,r-l);
        }
        return maxl;
    }
};