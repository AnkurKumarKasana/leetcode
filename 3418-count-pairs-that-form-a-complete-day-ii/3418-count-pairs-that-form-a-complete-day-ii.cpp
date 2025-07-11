class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        vector<long long>modcount(24,0);
        long long count =0;
        for(int h: hours){
            int mod= h%24;
            int comp= (24-mod)%24;
            count+=modcount[comp];
            modcount[mod]++;
        }return count;
    }
};
