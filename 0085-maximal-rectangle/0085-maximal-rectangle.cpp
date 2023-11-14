class Solution {
private:
    int maxArea(vector<int> &arr){
        stack<int>s;
        int ans=0;
        int n = arr.size();
        
        for(int i=0; i<=n ;i++){
            
            while(!s.empty() && (i==n || arr[s.top()] >= arr[i])){
                int height = arr[s.top()];
                s.pop();
                int width;
                if(s.empty()) width=i;
                else width = i-s.top()-1;
                ans = max (ans,width*height);
            }
            s.push(i);
        }
        return ans;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int ans=0;
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> height(col);
        
        for(int i=0 ;i<row ;i++){
            for(int j=0 ; j<col ;j++){
                if(matrix[i][j]== '1') height[j]++;
                else height[j]=0;
            }
            int area = maxArea(height);
            ans = max(ans,area);
        }
        return ans;
    }
};