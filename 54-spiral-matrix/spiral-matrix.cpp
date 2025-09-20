class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowst=0;
        int rowend=matrix.size()-1;
        int colst=0;
        int colend=matrix[0].size()-1;
        vector<int> arr;
    while(rowst<=rowend && colst<=colend){
        for(int j=colst;j<=colend;j++){
            arr.push_back(matrix[rowst][j]);
        }
        if(rowst==rowend){
            break;
        }
        for(int i=rowst+1;i<=rowend;i++){
            arr.push_back(matrix[i][colend]);
        }
        if(colst==colend){
            break;
        }
        for(int j=colend-1;j>=colst;j--){
            arr.push_back(matrix[rowend][j]);
        }
        for(int i=rowend-1;i>rowst;i--){
            arr.push_back(matrix[i][colst]);
        }

        rowst++;
        rowend--;
        colst++;
        colend--;
    }
    return arr;
    }   
};