#include <bits/stdc++.h> 
using namespace std;
int solve(vector<int>&num,int tar,vector<int>&dp){
    if(tar<0){
        return 0;         // the reca nd memo method
    }
    if(tar==0){
        return 1;
    }
    if(dp[tar]!=-1){
        return dp[tar];
    }
    int ans=0;
    for(int i=0;i<num.size();i++){
       ans=ans+solve(num,tar-num[i],dp);
    }
    dp[tar]=ans;
    return dp[tar];
}
// int solveit(vector<int>&num,int tar){  // tabulation method
//    vector<int>dp(tar+1,0);
//    dp[0]=1;
//    for(int i=1;i<=tar;i++){
//        for(int j=0;j<num.size();j++){
//            if(i-num[j]>=0){
//            dp[i]+=dp[i-num[j]];
//            }
//        }
//    }
//    return dp[tar];
// }

int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    vector<int>dp(tar+1,-1);
    int ans=solve(num,tar,dp);
      return ans;

}