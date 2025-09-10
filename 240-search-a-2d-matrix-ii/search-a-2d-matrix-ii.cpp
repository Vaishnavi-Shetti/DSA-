class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int row=mat.size();
        int col=mat[0].size();
        int m=0;
        int n=col-1;
        while(m<row && n>=0){
            if(tar==mat[m][n]){
                return true;
            }
            else if(tar>mat[m][n]){
                m++;
            }
            else if(tar<mat[m][n]){
                n--;
            }
        }
        return false;
    }
};