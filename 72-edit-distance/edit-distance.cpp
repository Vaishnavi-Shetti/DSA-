class Solution {
public:
    int minDistance(string word1, string word2) {
        string myword1='#'+word1;
        string myword2='#'+word2;
        int n=myword2.size();
        int m= myword1.size();
         
vector<vector<int>> mat(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0){
                    mat[i][j]=i+j;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(myword1[i]==myword2[j]){
                    mat[i][j]=mat[i-1][j-1];
                }
                else{
                mat[i][j]=min(min(mat[i-1][j]+1,mat[i][j-1]+1),mat[i-1][j-1]+1);
                }
            }
        }
        return mat[m-1][n-1];
    }
};