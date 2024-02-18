class Solution {
public:

    int first(vector<int>& nums, int target){
        int first=-1;
        int s=0,e=nums.size()-1;

        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                first=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return first;
    }



    int last(vector<int>& nums, int target){
        int last=-1;
        int s=0,e=nums.size()-1;

        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                last=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));

        return ans;
    }
};