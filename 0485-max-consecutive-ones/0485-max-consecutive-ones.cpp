class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,maxl=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                while(l<=r) l++;
            }
            maxl=max(maxl,r-l+1); 
        }
        return maxl;
    }
};