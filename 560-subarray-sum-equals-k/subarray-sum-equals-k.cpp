class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int freq=0;
        int n=size(nums);
        for(int i=0;i<n;i++){
            int sum=nums[i];
            if(sum==k)freq++;
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                if(sum==k)freq++;
            }
        }
        return freq;
    }
};