class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            int index=-1;

            for(int j=0;nums2.size();j++){
                if(nums2[j]==num){
                    index=j;
                    break;
                }
            }

            int nxt=-1;
            for(int k=index+1;k<nums2.size();k++){
                if(nums2[k]>num){
                    nxt=nums2[k];
                    break;
                }
            }
            result.push_back(nxt);
        }return result;
    }
};