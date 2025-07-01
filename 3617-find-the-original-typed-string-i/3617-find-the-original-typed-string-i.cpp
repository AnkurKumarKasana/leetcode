class Solution {
public:
    int possibleStringCount(string word) {
        int size=word.length();
        int count = size;
        for(int i=1;i<size;i++){
            if(word[i]!=word[i-1]){
                count --;
            }
        }return count ;
    }
};