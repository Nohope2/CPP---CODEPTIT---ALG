#include <bits/stdc++.h>
using namespace std;
 int mat[105][105];
void process(int n,int m)
{
    int i = 0, j = 0;
    bool check = true;
    for (int k=0;k<n*m;)
    {
        if (check) 
        {
            for (;i >= 0 && j < m; j++, i--)
            {
                cout<<mat[i][j]<<" ";
                k++;
            }
            if (i<0&&j<=m-1) i = 0;
            if (j==m) i=i+2, j--;
        }
        else {
            for (;j>=0&&i<n;i++,j--)
            {
                cout<<mat[i][j]<<" ";
                k++;
            }
            if (j<0&&i<=n-1) j = 0;
            if (i==n) j=j+2, i--;
        }
        check=!check;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
         for(int j=0;j<m;j++) cin>>mat[i][j];
         process(n,m);
         cout<<'\n';
    }
    return 0;
}