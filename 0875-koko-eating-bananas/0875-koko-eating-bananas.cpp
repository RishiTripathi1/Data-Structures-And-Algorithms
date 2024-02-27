class Solution {
public:

    long long timetaken(vector<int>& v, int speed){
        long long time=0;

        for(int i=0;i<v.size();i++ ){
            time += ceil((double)v[i]/(double)speed);
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalh=timetaken(piles,mid);
            if(totalh<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};