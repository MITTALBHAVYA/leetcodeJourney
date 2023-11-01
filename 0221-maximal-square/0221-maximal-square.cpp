class Solution {
public:
    int solve(vector<vector<char>>trial){
        int n=trial.size();
        int m=trial[0].size();
        if(n<2 || m<2){
            return 0;
        }
        vector<vector<char>>loop(n-1,vector<char>(m-1,'0'));
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++){
                if(trial[i][j]=='1' && trial[i][j+1]=='1' && trial[i+1][j]=='1' &&trial[i+1][j+1]=='1'){
                    flag=1;
                    loop[i][j]='1';
                }
            }
        }
        if(flag==1){
            return 1+solve(loop);
        }
        else{
            return 0;
        }
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int count=0;
        int empty=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='1'){
                    empty=0;
                    break;
                }
            }
            if(empty==0){
                break;
            }
        }
        if(empty){
            return 0;
        }
        else
        {
            count=solve(matrix);
            return (count+1)*(count+1);
        }
        
    }
};