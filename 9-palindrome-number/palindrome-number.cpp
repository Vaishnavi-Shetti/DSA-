class Solution {
    int revNum(int n){
        int r=0;
        while(n!=0){
            int d=n%10;
            if(r>INT_MAX/10 || r<INT_MIN/10){
                return -1;
            }
            r=(r*10)+d;
            n=n/10;
        }
        return r;
    }
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int r=revNum(x);
        if(r==-1){
            return false;
        }
        if(x==r){
            return true;
        }
        else
        return false;

    }
};