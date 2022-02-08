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
int m,n,mat[20][20];
void init()
{
    cin>>m>>n;
    FOR(i,m)
    {
        FOR(j,n) cin>>mat[i][j];
    }
}
void Swap(int mat[][20], int row1, int row2,int col)
{
    FOR(i,col)
    {
        int temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}
int RankMT(int mat[][20])
{
    int rank = min(m,n);
    FOR(row,rank)
    {
        if (mat[row][row])
        {
           FOR(col,m)
           {
               if (col != row)
               {
                 double mult = (double)mat[col][row]/mat[row][row];
                 FOR(i,rank)
                   mat[col][i] -= mult * mat[row][i];
              }
           }
        }
        else
        {
            bool check = true;
           FORS(i,row + 1,m-1)
            {
                if (mat[i][row])
                {
                    Swap(mat, row, i, rank);
                    check = false;
                    break ;
                }
            }
            if (check)
            {
                rank--;
                FOR(i,m) mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    return rank;
}
int main()
{
     ios::sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
       init();
       cout<<RankMT(mat)<<endl;
   }
    return 0;
}