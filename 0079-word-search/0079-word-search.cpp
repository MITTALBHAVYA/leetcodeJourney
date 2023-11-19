class Solution {
private:
    vector<vector<char>>inside_board;
    string inside_word;
    int rows,cols;
    bool dfs(int i,int j,int size_matched){
        if(size_matched==inside_word.size()){
            return true;
        }
        if(i>=rows || j>=cols || j<0 || i<0|| inside_board[i][j]!=inside_word[size_matched]){
            return false;
        }
        char temp=inside_board[i][j];
        inside_board[i][j]=' ';
        bool ans=dfs(i,j+1,size_matched+1)||dfs(i+1,j,size_matched+1)||dfs(i,j-1,size_matched+1)||dfs(i-1,j,size_matched+1);
        inside_board[i][j]=temp;
        return ans;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        inside_board=board;
        inside_word=word;
        rows=board.size();
        cols=board[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j]==word[0] && dfs(i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};