class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //matrix of n*n
        vector<vector<int>>ans(n,vector<int>(n));
        int start=1;
        int top=0,left=0,bottom=n-1,right=n-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans[top][i]=start;
                start++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=start;
                start++;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans[bottom][i]=start;
                start++;
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans[i][left]=start;
                start++;
            }
            left++;
        }
    }
    return ans;
}
};