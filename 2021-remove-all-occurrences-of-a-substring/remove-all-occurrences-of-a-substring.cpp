class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        int m=part.size();
        while(s.find(part)<n && s.find(part)>=0){
            int it=s.find(part);
            s.erase(it,m);
        }
        return s;
    }
};