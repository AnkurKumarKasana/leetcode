class Solution {
public:
    int maxArea(vector<int>& arr) {
        
        int s=0 , e=arr.size()-1, maxwater=0;
        while (s<e){
    
        int height= min(arr[s],arr[e]);
        int width = e-s;
        int cwater = width*height ;
        maxwater=max(cwater,maxwater);
        if(arr[s]<arr[e]) {
            s++;
        }else{e--;}
    }
    return maxwater;
    }
};