class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
        int rightsum=0;
        for(int i=0;i<arr.size();i++){
            rightsum+=arr[i];
        }
        int leftsum=0;
        for(int i =0;i<arr.size();i++){
            rightsum-=arr[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum+=arr[i];

        }return -1;

        
    }
};