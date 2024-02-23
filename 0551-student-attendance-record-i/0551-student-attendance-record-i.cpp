class Solution {
public:
    bool checkRecord(string s) {
        int cnta=0,cntl=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                cnta++;
                cntl=0;
            }
            else if(s[i]=='L'){
                cntl++;
            }
            else cntl=0;

            if(cnta>=2 || cntl>=3) return false;
        }
        return true;
    }
};