class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int st=0;
        int end=m-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            int n=matrix[mid].size();
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                //row found;
                int row=mid;
                int st=0;
                int end=n-1;
                while(st<=end){
                     mid=st+(end-st)/2;
                    if(target==matrix[row][mid]){
                        return true;
                    }
                    else if(target>matrix[row][mid]){
                        st=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
                return false;
            }
            else if(target>matrix[mid][n-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};