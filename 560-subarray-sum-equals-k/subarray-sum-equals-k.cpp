class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int freq=0;
        int n=size(nums);
        unordered_map<int,int> m;

        int ps[n];
        ps[0]=nums[0];

        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }

        for(int j=0;j<n;j++){
            if(ps[j]==k)freq++;

            int val=ps[j]-k;
            if(m.find(val)!=m.end()){
                freq+=m[val];
            }
            if(m.find(ps[j])!=m.end()){
                m[ps[j]]++;
            }
            else{
                m[ps[j]]=1;
            }
        }
        return freq;
    }
};