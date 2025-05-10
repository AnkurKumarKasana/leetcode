class Solution {
public:
    bool isPalindrome(int x) {
        long long compare=x;
        long long dup=0;
        while(x!=0){
            if(x<0)return false;
            int tempans=x%10;
            dup=(dup*10)+tempans;
            x/=10;
        }
        if(compare==dup)return true;
        return false;
        
    }
};