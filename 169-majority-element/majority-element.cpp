class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //sorting
        sort(nums.begin(),nums.end());

        //majority
        int freq=1;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
                if(freq> n/2){
                    return ans;
                }
            }
            else{
                freq=1;
                ans=nums[i];
            }
        }
        return ans;
    }
};