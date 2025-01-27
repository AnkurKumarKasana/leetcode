class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(arr.empty())return 0;
        int fp=1;
        for(int sp=1;sp<arr.size();sp++){
            if(arr[sp]!=arr[sp-1]){
                arr[fp++]=arr[sp];
                
                
            }
        } return fp;



    
        
    }
};