class Solution {
public:
    bool isPalindrome(string str) {
        str.erase(remove_if(str.begin(),str.end(),[](char c){return !isalnum(c);}),str.end());
        
        transform(str.begin(),str.end(),str.begin(),::tolower);
        int n=str.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(str[s]!=str[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};