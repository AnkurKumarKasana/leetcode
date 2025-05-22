class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> remainderList(k, 0);
        int sum = 0;
        int count = 0;
        remainderList[0] = 1;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];

            int rem = sum % k;
            if (rem < 0) {
                rem += k;
            }

            count += remainderList[rem];

            remainderList[rem]++;
        }

        return count;
    }
};