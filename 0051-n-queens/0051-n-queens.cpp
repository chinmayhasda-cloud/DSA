class Solution {
public:
    vector<vector<string>> ans;
    vector<string> s;
    bool is_valid(int row, int col, int n) {

    // Same column
    int i = row - 1;

    while(i >= 0) {
        if(s[i][col] == 'Q')
            return false;
        i--;
    }

    // Upper-left diagonal
    i = row - 1;
    int j = col - 1;

    while(i >= 0 && j >= 0) {
        if(s[i][j] == 'Q')
            return false;

        i--;
        j--;
    }

    // Upper-right diagonal
    i = row - 1;
    j = col + 1;

    while(i >= 0 && j < n) {
        if(s[i][j] == 'Q')
            return false;

        i--;
        j++;
    }

    return true;
}

    void helper(int i,int n){
        if(i==n){
            ans.push_back(s);
            return ;
        }
        for(int j=0;j<n;j++){
            if(is_valid(i,j,n)){
                s[i][j]='Q';
                helper(i+1,n);
                s[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        s.resize(n,string(n,'.'));
        helper(0,n);
        return ans;
    }
};