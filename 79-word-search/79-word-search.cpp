class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,int count,string word){
        // if the count and word.length are same which means we have covered the string and there is nothing left to search so ... we will return true...
        if(count==word.length())return true;
        
        // now we will take take of our recurssion going out of bound ...
        // so 
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[count]){
            return false;
        }
        // we also need to take care that we are not using the same word twice.. 
        // so we will add a blank space to whichever word we traverse
        // we also need to fill it back because iske jo dfs dusra word k liye hoga usko toh chaiye hoga na words 
        char temp=board[i][j];
        board[i][j]=' ';
        
        bool search=dfs(board,i-1,j,count+1,word) || dfs(board,i+1,j,count+1,word) ||dfs(board,i,j-1,count+1,word) || dfs(board,i,j+1,count+1,word);
        
        board[i][j]=temp;
        return search;
    }
    bool exist(vector<vector<char>>& board, string word) {
     //we will go through the board and find the first letter of the word in the board and then we will start the dfs search for the rest of the word left in the string word 
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j]==word[0] && dfs(board,i,j,0,word)){
                   return true;
                }
            }
        }
        return false;   
    }
};