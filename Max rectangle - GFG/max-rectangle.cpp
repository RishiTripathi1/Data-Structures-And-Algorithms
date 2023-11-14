//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    private:
    
    int maxarea(vector<int> arr){
        int n = arr.size();
        stack<int>s;
        int ans=0;
        
        for(int i=0 ; i<=n ;i++){
            
            while(!s.empty() && (i==n || arr[s.top()] >= arr[i])){
                int height =arr[s.top()];
                s.pop();
                int width;
                if(s.empty()) width=i;
                else width=i-s.top()-1;
                
                ans=max(ans,width*height);
            }
            s.push(i);
        }
        return ans;
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int area =0; 
        vector<int>height(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] == 1) height[j]++;
                else height[j]=0;
            }
            int ans = maxarea(height);
            area = max(area,ans);
        }
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends