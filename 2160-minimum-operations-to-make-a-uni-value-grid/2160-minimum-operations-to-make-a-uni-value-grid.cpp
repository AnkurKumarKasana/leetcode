class Solution {
public:
    int minOperations(vector<vector<int>>& arr, int x) {
        int row=arr.size(),col=arr[0].size();
        vector<int> nums;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                nums.push_back(arr[i][j]);
            }
        }

        int remainder=nums[0] % x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%x!=remainder)return -1;
        }
        sort(nums.begin(),nums.end());

        int median = nums[nums.size()/2];
        int count=0;

        for(int i=0;i<nums.size();i++){
            count+=abs(nums[i]-median)/x;
        }return count ;


        
    }
};