#include<bits/stdc++.h>
using namespace std;
long long Count(string str, long long n)
{
    long long len = str.length();
    long long dp[len][n];
    memset(dp, 0, sizeof(dp));
    dp[0][(str[0]-'0')%n]++;
 
    for (int i=1; i<len; i++)
    {
        dp[i][(str[i]-'0')%n]++;
 
        for (int j=0; j<n; j++)
        {
            dp[i][j] += dp[i-1][j];
            dp[i][(j*10 + (str[i]-'0'))%n] += dp[i-1][j];
        }
    }
 
    return dp[len-1][0];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l;
        cin>>l>>n;
        string str;
        cin>>str;
        cout << Count(str, n)<<'\n';
    }
    return 0;
}