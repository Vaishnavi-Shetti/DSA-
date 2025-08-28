class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag algorithm ->Most optimal solution
        int l,m=0;
        int h=nums.size()-1;
        while(m<=h){
           if(nums[m]==0){
            swap(nums[m],nums[l]);
            l++;
            m++;
           } 
           else if(nums[m]==1){
            m++;
           }
           else if(nums[m]==2){
            swap(nums[m],nums[h]);
            h--;
           }
        }
        }

    
};