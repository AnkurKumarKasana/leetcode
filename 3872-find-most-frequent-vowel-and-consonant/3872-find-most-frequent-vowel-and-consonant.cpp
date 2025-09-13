class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        int n= s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int vowfreq=0,consfreq=0;
        for(auto &it:mp){
            char ch=it.first;
            int freq=it.second;
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                vowfreq=max(freq,vowfreq);
            }else{
                consfreq=max(freq,consfreq);
            }
        }
        return vowfreq+consfreq;

        
    }
};