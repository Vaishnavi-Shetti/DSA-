class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;

        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
             freq[s1[i]-'a']++;
        }
        
        int st=0;
        int end=s1.length()-1;
        while(end<s2.length()){
            int wdfreq[26]={0};
            for(int i=st;i<=end;i++){
                wdfreq[s2[i]-'a']++;
            }
            if(equal(std::begin(freq),std::end(freq),std::begin(wdfreq))){
                return true;
            }
            st++;
            end++;
        }
        return false;
    }
};