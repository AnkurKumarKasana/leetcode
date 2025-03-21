class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0,i=0,num=1;
        while(count<k){
            if(i<arr.size()&& arr[i]==num){
                i++;
            }else{
                count++;
                if(count==k)return num;
            }
            num++;
        }return -1;


        
    }
};