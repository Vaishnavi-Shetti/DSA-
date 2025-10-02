class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return 0;
        }
       transform(s.begin(),s.end(),s.begin(),::toupper);
       transform(t.begin(),t.end(),t.begin(),::toupper);

      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
       if(s==t){
                return 1;
       }
        return 0;
    }
};