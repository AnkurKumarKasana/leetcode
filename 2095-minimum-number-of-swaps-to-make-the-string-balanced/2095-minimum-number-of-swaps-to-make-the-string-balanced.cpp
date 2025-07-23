class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(char ch: s){
            if(ch=='['){
                st.push(ch);
            }else if(!st.empty()){
                st.pop();
            }
        }int n= st.size();
        return (n+1)/2;
    }
};