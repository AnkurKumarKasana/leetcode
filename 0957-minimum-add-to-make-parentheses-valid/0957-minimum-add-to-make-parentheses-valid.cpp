class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char>st;
        int count =0;
         for(char &ch:s){
            if(ch=='('){
// jab bhi "(" ye aaye  stack me daaldo
                st.push(ch);
            }
/*else me gya hai to ")" hoga  */
                else{
//  agar stack khaali nahi hai to usme "(" hoga use del krdo */
                if (!st.empty()) {
                    st.pop();
                }else{
                     count ++;
                }
            }
         }
         return count+st.size();
//count jo hai wo ""
    }
};