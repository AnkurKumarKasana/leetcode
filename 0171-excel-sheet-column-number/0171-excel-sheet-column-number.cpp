class Solution {
public:
    int titleToNumber(string s) {
        int result =0;
        for(char c:s){
            char ch=c-'A'+1;
            result=result*26+ch;
        }return result ;
    }
};