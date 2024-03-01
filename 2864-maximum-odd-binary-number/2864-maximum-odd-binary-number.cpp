class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1=0;
        for(char ch : s){
            if(ch=='1') cnt1++;
        }
        int cnt0=s.size()-cnt1;
        string ans="";
        for(int i=0;i<s.size()-1;i++ ){
            if(cnt1-1 != 0){
                ans.push_back('1');
                cnt1--;
            }
            else{
                ans.push_back('0');
                cnt0--;
            }
        }
        ans.push_back('1');

        return ans;
    }
};