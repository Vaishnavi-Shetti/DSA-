class Solution {
public:
    int secondHighest(string s) {
        int firstLargest=-1;
        int secondLargest=-1;
     for(char c: s){
        if(isdigit(c)){
            int digit=c -'0'; //convert char to int
            if(digit>firstLargest){
                secondLargest=firstLargest;
                firstLargest=digit;
            }
            else if(digit<firstLargest && digit>secondLargest){
                secondLargest=digit;
            }
        }
        else{
            continue;
        }
     }
     return  secondLargest;  
    }
};