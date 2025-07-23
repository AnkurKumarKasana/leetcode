class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<bool>valid(s.length(),true);
        string res = "";
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    valid[i]=false;
                }
            }
        }
        while(!st.empty()){
            valid[st.top()]=false;
            st.pop();
        }
        for(int i=0;i<s.length();i++){
            if(valid[i]==true){
                res+=s[i];
            }
        }
        return res;
    }
};