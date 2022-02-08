#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const long long mod=1e9+7;
long long dp[1005][1005];
void solve()
{

    for (int i=0;i<=1000; i++)
    {
        for(int j=0;j<=i;j++)
        {
             if (j==0||j==i) dp[i][j]=1;
             else  dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
             dp[i][j]%=mod;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    solve();
    int t;
    cin>>t;
    while(t--)
    {
         int n,k;
         cin>>n>>k;
         cout<<dp[n][k]<<endl;
    }
    return 0;
}