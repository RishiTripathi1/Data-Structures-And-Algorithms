class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int psum=0;
        unordered_map<int,int>mp;
        int n = nums.size();
        mp[0]=1;
        for(int i=0;i<n;i++ ){
            psum+=nums[i];
            if(mp.count(psum-k) > 0){
                cnt+=mp[psum-k];
            }
            mp[psum]++;
        }
        return cnt;
    }
};