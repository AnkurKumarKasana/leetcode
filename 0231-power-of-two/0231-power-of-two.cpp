class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        // it will do bitwise and in n and n-1 
        // if bitwise & of n and (n-1==0) then the no.is power of two
            return (n&(n-1))==0;
        
        
    }
};