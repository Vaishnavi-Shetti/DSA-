class Solution {
public:
    string largestOddNumber(string num) {
        
       
            while(!(num.empty())){
                char c=num.back();
                int n=c-'0';
                if(n%2==0){
                    num.pop_back();
                }
                else return num;
            }
             return "";
        
    }
};