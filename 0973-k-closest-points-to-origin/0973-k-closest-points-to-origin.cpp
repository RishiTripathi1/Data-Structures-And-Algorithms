class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>maxh;
        int dist =0;
        for(int i=0;i<points.size();i++){
            dist= pow(points[i][0],2) + pow(points[i][1],2);
            maxh.push({dist,i});
            if(maxh.size()>k) maxh.pop();
        }
        vector<vector<int>> ans;
        while(maxh.size()>0){
            ans.push_back(points[maxh.top().second]);
            maxh.pop();
        }
        return ans;
    }
};