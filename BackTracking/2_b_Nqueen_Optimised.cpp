#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;


void printSolution(vector<vector<char>> &board, int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    
    if(rowCheck[row]==true)
    return false;
    
    if(upperLeftDiagonalCheck[n-1+col-row]==true)
    return false;
    
    if(bottomLeftDiagonalCheck[col+row]==true)
    return false;
    
    return true;
    // int i=row;
    // int j=col;
    
    // //left row ko check karo
    // while(j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     j--;
    // }
    
    // //top diagonal left mein check karo
    // i=row;
    // j=col;
    // while(i>=0 &&  j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }
    // //bottom diagonal left mein check karo
    // i=row;
    // j=col;
    // while(i<n && j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    // return true;
}
void solve(vector<vector<char>> board, int col, int n){
    if(col>=n){
        printSolution(board, n);
        return;
    }
    
    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col]='Q';
            rowCheck[row]=true;
            upperLeftDiagonalCheck[n-1+col-row]=true;
            bottomLeftDiagonalCheck[col+row]=true;
            
            solve(board, col+1, n);
            
            board[row][col]='-';
            rowCheck[row]=false;
            upperLeftDiagonalCheck[n-1+col-row]=false;
            bottomLeftDiagonalCheck[col+row]=false;
        }
    }
}
int main(){
    int n=4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col=0;
    solve(board, col, n);
    return 0;
}