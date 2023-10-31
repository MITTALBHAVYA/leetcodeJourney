class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(j==n-1){
                    matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j-1]);
                }
                else if(j==0){
                    matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j+1]);
                }
                else{
                    matrix[i][j]+=min(matrix[i+1][j],min(matrix[i+1][j+1],matrix[i+1][j-1]));
                }
            }
        }
        int mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mi=min(matrix[0][i],mi);
        }
        return mi;
    }
};