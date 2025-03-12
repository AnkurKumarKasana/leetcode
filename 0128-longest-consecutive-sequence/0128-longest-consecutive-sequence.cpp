class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int x:s){
            if(s.find(x-1)==s.end()){/* for finding beginning number*/
//upar wali line me ye check hoga ki x se chota set me hai kya aese karte karte karte wo set ki sbse choti value pe chla jayega or fir wha se if ke andar chla jayega 
                int count=1;
                while(s.find(x+count)!=s.end()){
                    count++;
                }
                ans=max(ans,count);
            }
        }return ans;
        
    }
};