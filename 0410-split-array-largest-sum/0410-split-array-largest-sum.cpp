class Solution {
public:

    int findmax(vector<int>& nums,int limit){
        int ans=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++ ){
            if(ans+nums[i]<=limit) ans+=nums[i];
            else{
                cnt++;
                ans=nums[i];
            }
        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid=low+(high-low)/2;
            if(findmax(nums,mid) > k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};