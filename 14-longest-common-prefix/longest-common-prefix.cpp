class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        string res=strs[0];
        for(int j=1;j<strs.size();j++){
            string s2=strs[j];
            int i;
            for( i=0;i<min(res.size(),s2.size());i++){
                if(res[i]!=s2[i]){
                    break;
                }
            }
           res=res.substr(0,i);
        }
        if(res.empty()){
            return "";
        }
        else return res;
    }
};