class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int most=0;
       while(l<r){
            int width=r-l;
            int height=min(h[l],h[r]);
            int area=height*width;
            most=max(area,most);
            if(h[l]<h[r]){
                l++;
            }else{
            r--;}
          
        }return most;
    }
};