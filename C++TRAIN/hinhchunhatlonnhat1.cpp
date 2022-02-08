#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
int maxArea(bool mat[][20],int m,int n)
{
    int hist[m+1][n+1];
    FOR(i,n)
    {
        hist[0][i] = mat[0][i];
        FORS(j,1,m-1)
            hist[j][i]=(mat[j][i]== 0)?0:hist[j - 1][i]+1;
    }
    FOR(i,m)
    {
        int count[m+1] = {0};
        FOR(j,n)
            count[hist[i][j]]++;
        int col=0;
        FOD(j,m,0)
        {
            if (count[j] > 0)
            {
                FOR(k,count[j])
                {
                    hist[i][col] = j;
                    col++;
                }
            }
        }
    }
    int sum,Max= 0;
    FOR(i,m)
    {
       FOR(j,n)
        {
            sum=(j+1)*hist[i][j];
            Max=max(Max,sum);
        }
    }
    return Max;
}
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--)
    {
        bool mat[20][20];
        int m,n;
        cin>>m>>n;
        FOR(i,m)
         FOR(j,n) cin>>mat[i][j];
         cout<<maxArea(mat,m,n)<<endl;
    }
    return 0;
}