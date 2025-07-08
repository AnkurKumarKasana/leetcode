class Solution {
public:
    int next(int n){
        int newnum=0;
        while(n!=0){
            int num=n%10;
            newnum+=num*num;
            n/=10;            
        }return newnum;

    }
    bool isHappy(int n) {
        unordered_set<int>res;
        while(n!=1&& !res.count(n)){
            res.insert(n);
            n=next(n);
        }return n==1;
    }
};