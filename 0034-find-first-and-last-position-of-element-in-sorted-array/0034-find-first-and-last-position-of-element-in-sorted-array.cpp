class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector <int> result(2,-1);
        int n=arr.size();
        // for the first index of target
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                result[0]=i;
                break;
            }
        }
        // agar result array me abhi bhi same value hai to nahi mili
        if(result[0]==-1)return result;

        // agar pehla element milgya to dusra ke liye naya loop
        for(int i=result[0];i<n;i++){
            if(arr[i]==target){
                result[1]=i;
            }
        }
        return result ;



        
    }
};