#include <bits/stdc++.h>
using namespace std;
 
void Matran(vector< vector<int> >&matrix,int m,int n)
{
    vector<int> ans;
    vector<vector<bool> > seen(m, vector<bool>(n, false));
    int dr[] = { 0, 1, 0, -1 };
    int dc[] = { 1, 0, -1, 0 };
    int r = 0, c = 0, di = 0;
    for (int i = 0; i < m*n; i++) {
        ans.push_back(matrix[r][c]);
        seen[r][c] = true;
        int cr = r + dr[di];
        int cc = c + dc[di];
 
        if (0 <= cr && cr < m && 0 <= cc && cc < n && !seen[cr][cc]) {
            r = cr;
            c = cc;
        }
        else {
            di = (di + 1) % 4;
            r += dr[di];
            c += dc[di];
        }
    }
   for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<' ';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
      vector< vector<int> > a(m,vector<int>(n));
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++) cin>>a[i][j];
      }
      Matran(a,m,n);
      cout<<endl;
     
    }
    return 0;
}