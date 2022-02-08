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
int main()
{
  faster();
  int t;
  cin>>t;
  while(t--)
  {
      int N,k;
      cin>>N>>k;
      int A[N];
      vector<int> res;
      FORS(i,1,N) cin>>A[i];
     deque <int> dq;
    for (int i = 1; i <= N; ++i) 
    { 
        while (dq.size() && A[dq.back()]<= A[i]) dq.pop_back();
        dq.push_back(i); 
        if (dq.front() + k <= i) dq.pop_front();
        if (i >= k) cout<<A[dq.front()]<<' '; 
    }
    cout<<endl;
    dq.clear();
  }
  return 0;
}