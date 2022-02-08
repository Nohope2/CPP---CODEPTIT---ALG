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
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[1005],b[1005],s,x;
        a[0]=b[0]=0;
        FORS(i,1,n){
            cin>>x;
            a[i]=a[i-1]+x;
        }
         FORS(i,1,m){
            cin>>x;
            b[i]=b[i-1]+x;
        }
        s=max(a[n],b[m]);
       FORS(i,1,min(m,n)) s=max(s,max(a[i]+b[m]-b[i],b[i]+a[n]-a[i]));
        cout<<s<<endl;
    }
  return 0;
}