class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end=nums.size()-1;
        int st=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            
                if(nums[mid]>=nums[st] ){
                    //left half sorted
                    if(target>=nums[st] && target<nums[mid]){
                        end=mid-1;
                    }
                    else{
                        st=mid+1;
                    }
                }
                else{
                    //right half sorted
                    if(target>nums[mid] && target<=nums[end]){
                        st=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
        }
        return -1;
    }
};