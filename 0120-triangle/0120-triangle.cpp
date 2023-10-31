class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=triangle[i].size()-1;j>=0;j--){
                int a=triangle[i][j] + triangle[i+1][j];
                int b=triangle[i][j] + triangle[i+1][j+1];
                triangle[i][j]=min(a,b);
            }
        }
        return triangle[0][0];
    }
};