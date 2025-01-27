class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int i=0,cntzero=0,maxlen=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==0)cntzero++;
            while(cntzero>1){
                if(arr[i]==0) cntzero--;
                i++;
            }
            maxlen=max(maxlen,j-i);
        }
        return maxlen;
    }
};