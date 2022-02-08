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
vll res;
int main()
{
    faster();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        priority_queue<ll,vll,greater<ll> >p;
        priority_queue<ll,vll>q;
        FOR(i,n)
        {
            ll tmp;cin>>tmp;
            res.pb(tmp);
            p.push(tmp);
            q.push(tmp);
        }
        ll l,r;
        FOR(i,n)
        {
            ll x=p.top();
            if(res[i]!=x)
            {
                l=i+1;break;
            }
            else p.pop();
        }
        FOD(i,n-1,0)
        {
            ll y=q.top();
            if(res[i]!=y)
            {
                r=i+1;break;
            }
            else q.pop();
        }
        cout<<l<<' '<<r<<endl;
        res.clear();
}
  return 0;
}