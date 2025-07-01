class Solution {
public:
    string finalString(string s) {
        string result="";
        for(auto ch:s){
            if(ch!='i')result+=ch;
            else{
                reverse(begin(result),end(result));
            }
        }return result;
    }
};