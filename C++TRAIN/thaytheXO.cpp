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
char mat[25][25];
int M,N;
void Dequy(int x, int y, char prevV, char newV)
{
    if (x < 1 || x > M || y < 1 || y > N) return;
    if (mat[x][y] != prevV) return;
    mat[x][y] = newV;
    Dequy(x+1, y, prevV, newV);
    Dequy(x-1, y, prevV, newV);
    Dequy(x, y+1, prevV, newV);
    Dequy(x, y-1, prevV, newV);
}
void process()
{
    FORS(i,1,M) 
    {
      if (mat[i][1] == '-') Dequy(i, 1, '-', 'O');
      if (mat[i][N] == '-') Dequy(i, N, '-', 'O');
    }
    FORS(i,1,N)
    {
      if (mat[1][i] == '-') Dequy(1, i, '-', 'O');
      if (mat[M][i] == '-')  Dequy(M, i, '-', 'O');
    }
}
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      cin>>M>>N;
      FORS(i,1,M)
      {
          FORS(j,1,N) 
          {
            cin>>mat[i][j];
            if(mat[i][j] == 'O') mat[i][j] = '-';
          }
      }
      process();
      FORS(i,1,M)
      {
       FORS(j,1,N) 
       {
         if(mat[i][j] == '-') cout << 'X' << ' ';
         else cout<<mat[i][j]<<' ';
       }
       cout<<endl;
      }
  }
  return 0;
}