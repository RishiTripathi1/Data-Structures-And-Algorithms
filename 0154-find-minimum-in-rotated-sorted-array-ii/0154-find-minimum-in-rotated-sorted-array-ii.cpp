class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            ans = min(ans, nums[mid]);
            if(nums[low] == nums[mid] and nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
            if(nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            } else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};