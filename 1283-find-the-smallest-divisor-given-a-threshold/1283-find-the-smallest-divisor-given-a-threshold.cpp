class Solution {
public:
    
    int help(vector<int>& arr,int val){
        int ans=0;
        for(int i=0;i<arr.size();i++ ){
            ans += ceil((double)arr[i]/(double)val);
        }
        return ans;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(help(nums,mid)<=threshold) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};