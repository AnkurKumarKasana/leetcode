class Solution {
public:
    int reverse(int x) {
        int ans=0;
       while(x!=0){
        int a=x%10;
        ans=(ans*10)+a;
        x/=10;
       }
       return ans;
    }
};