#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int dfs(int x,int y,vector<vector<int>>& dp){
    if(x<0||y<0){
        return 0;
    }
    if(x==0&&y==0){
        return 1;
    }
    if(dp[x][y]!=-1){
        return dp[x][y];
    }
    int left = dfs(x,y-1,dp);
    int up = dfs(x-1,y,dp);
    return dp[x][y] = (left%mod+up%mod)%mod;
}
int ways(int x, int y){
    //code here.
    vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
    return dfs(x,y,dp);
 }