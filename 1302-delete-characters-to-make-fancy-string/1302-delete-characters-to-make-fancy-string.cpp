class Solution {
public:
    string makeFancyString(string s) {
        int j = 0;
        for(int i=0 ; i<s.size() ; i++){
            if(j < 2 || s[i] != s[j-1] || s[i] != s[j-2]){
                s[j] = s[i];
                j++;
            }
        }return s.substr(0,j);
    }
};