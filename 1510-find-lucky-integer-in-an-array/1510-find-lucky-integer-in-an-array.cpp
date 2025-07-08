class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501]={0};
        
        for(int num:arr){
            freq[num]++;            
        }
        int res=-1;
        for(int i=1;i<=500;i++){
            if(freq[i]==i){res=i;}
        }
        return res;
    }
};