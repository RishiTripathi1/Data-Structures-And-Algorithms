class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        string word="";

        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(!word.empty()){
                    st.push(word);
                    word="";
                }
            }
            else word+=s[i];
        }


        if(!word.empty()) st.push(word);

        while(st.size() != 1){
            ans += st.top() + " ";
            st.pop();
        }
        ans+= st.top();
        return ans;
    }
};