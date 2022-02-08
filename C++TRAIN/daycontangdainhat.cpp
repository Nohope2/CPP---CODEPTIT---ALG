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
int a[1005],dp[1005]={},n,T[1005];
stack<int>st;
int main()
{
  faster();
      cin>>n;
      FORS(i,1,n) cin>>a[i];
      int ljmax,jmax,dau;
      dp[1]=1;
      T[1]=1;
      FORS(i,2,n)
      {
          ljmax=0;
          jmax=0;
          FORS(j,1,i-1)
          {
              if(a[i]>a[j]&&ljmax<=dp[j])
              {
                  ljmax=dp[j];
                  jmax=j;
              }
              if(ljmax==0)
              {
                dp[i]=1;
                T[i]=1;
              }
              else
              {
                   dp[i]=ljmax+1;
                   T[i]=jmax;
              }
          }
      }
    ljmax=0;
    FORS(i,1,n)
    {
      if(ljmax<=dp[i])
      {
        ljmax=dp[i];
        jmax=i;
      }
    }
    cout<<ljmax<<endl;
    st.push(a[jmax]);
    while(1)
    {
      jmax=T[jmax];
      st.push(a[jmax]);
      if(dp[jmax]==1) break;
    }
    while(!st.empty())
    {
      cout<<st.top()<<' ';
      st.pop();
    }
  return 0;
}