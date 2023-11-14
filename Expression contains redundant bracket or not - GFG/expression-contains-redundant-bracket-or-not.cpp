//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            
            if(ch==')'){
                char top = st.top();
                st.pop();
                
                bool flag = true;
                
                while(top != '('){
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        flag=false;
                    }
                    top = st.top();
                    st.pop();
                }
                if(flag==true){
                    return true;
                }
            }
            else{
                st.push(ch);
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends