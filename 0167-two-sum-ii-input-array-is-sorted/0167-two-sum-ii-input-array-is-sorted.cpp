class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int>ans;
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]==k){
                return {i+1,j+1};
            }
            else if(arr[i]+arr[j]>k) j--;
            else i++;
        }
        return {-1,-1};
    }
};