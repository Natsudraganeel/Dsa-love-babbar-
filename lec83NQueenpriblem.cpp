#include <bits/stdc++.h> 
using namespace std;
void addsolution(vector<vector<int>>&ans,vector<vector<int>>&board,int n){
	vector<int>temp;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
	
}
bool issafe(int row,int col,int n,vector<vector<int>>&board){

	 int x=row;int y=col;
	 while(y>=0){
       if(board[x][y]==1){
              return false;
	   }

		 y--;
	 }  
	 x=row;y=col;
	 while(x>=0 && y>=0){
		 if(board[x][y]==1){
			 return false;
		 }
		 x--;
		 y--;
	 }
	  x=row;y=col;
	 while(x<n && y>=0){
      if(board[x][y]==1){
		  return false;
	  }


		 x++;
		 y--;
	 }
	 return true;
     
}
void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,int n){
    if(col==n){
		addsolution(ans,board,n);
		return ;
	}
	for(int i=0;i<n;i++){
		if(issafe(i,col,n,board)){
			board[i][col]=1;
			solve(col+1,ans,board,n);
			board[i][col]=0;
		}
	}



}
vector<vector<int>> nQueens(int n)
{
	// Write your code here

	vector<vector<int>>ans;
	vector<vector<int>>board(n,vector<int>(n,0));
	solve(0,ans,board,n);
	return ans;
}