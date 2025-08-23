class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int end=nums.size()-1;
        int st=0;
        if(n==1){
            return nums[0];
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mid==0 && nums[0]!=nums[1]){
                return nums[mid];
            }
            if(mid==n-1 && nums[n-1]!=nums[n-2]){
                return nums[mid];
            }
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
            //L & R has even no.of elements
                if(nums[mid]==nums[mid-1]){
                    //single elements id in left part
                    end=mid-2;
                }            
                else{
                    //single element is in right part
                    st=mid+2;
                }    
            }
            else{
                //L & R has odd no.of elements
                if(nums[mid]==nums[mid-1]){
                    //single elements id in right part
                    st=mid+1;
                }            
                else{
                    //single element is in left part
                    end=mid-1;
                } 
            }
        }
        return -1;
    }
};