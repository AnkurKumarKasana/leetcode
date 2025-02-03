class Solution {
    public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        unordered_map <int,int> m;
        for(int i=0;i<a.size();i++){
//yha check hora hai ki a[i] pehle se set me hai ya nahi 
// agar hai to continue -- nahi to if se bhaar aajayega
            if(m.find(a[i])!=m.end()){
                if (i - m[a[i]] <= k){
// m[a[i]] this is j ---- yha i-j check karo agar <=k hai to true 
                    return true;
            }
        }m[a[i]]=i;
    }return false;
}
};
