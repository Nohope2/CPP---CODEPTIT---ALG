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
ll arr[1000007];
ll countmin(ll n, ll x)
{
    ll curr_sum = 0, min_len = n + 1;
    ll start = 0, end = 0;
    while (end < n) 
    {
        while (curr_sum <= x && end < n) curr_sum += arr[end++];
        while (curr_sum > x && start < n)
        {
            if (end - start < min_len) min_len = end - start;
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        FOR(i,n) cin>>arr[i];
        ll res=countmin(n,x);
        if(res==n+1) cout<<-1<<endl;
        else cout<<res<<endl;
    }
    return 0;
}