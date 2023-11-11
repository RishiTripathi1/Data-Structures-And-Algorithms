class Solution {
private:

    vector<int> nextsmaller(vector<int> &arr, int n){
        stack<int>s;
        vector<int> ans(n,-1);

        for(int i=n-1;i>=0;i--){
            int curr = arr[i];

            while(!s.empty()){
                if(arr[s.top()]<curr){
                    ans[i]=s.top();
                    break;
                }
                else{
                    s.pop();
                }
            }
            s.push(i);
        }
        return ans;
    }

    vector<int> prevsmaller(vector<int> &arr, int n){
        stack<int>s;
        vector<int> ans(n,-1);

        for(int i=0 ;i<n ;i++){
            int curr = arr[i];

            while(!s.empty()){
                if(arr[s.top()]<curr){
                    ans[i]=s.top();
                    break;
                }
                else{
                    s.pop();
                }
            }
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n); 
        next = nextsmaller(heights,n);
        vector<int>prev(n); 
        prev = prevsmaller(heights,n);
        int area =INT_MIN;
        for(int i=0 ;i<n ;i++){

            int length=heights[i];

            if(next[i] == -1){
                next[i]=n;
            }

            int breadth = next[i]-prev[i]-1;
            int newArea= length*breadth;
            area = max(area,newArea);
        }
        return area;
    }
};