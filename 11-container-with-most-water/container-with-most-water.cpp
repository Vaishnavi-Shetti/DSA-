class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0;
        int rp=size(height)-1;
        while(lp<rp){
            int h=min(height[lp],height[rp]);
            int w=rp-lp;
            int a=w*h;
            maxWater=max(maxWater,a);
           height[lp]<height[rp]? lp++:rp--;
        }
        return maxWater;
    }
};