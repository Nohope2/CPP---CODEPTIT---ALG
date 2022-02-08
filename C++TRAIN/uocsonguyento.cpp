#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) x.size()
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define PI 3.141592653589793238
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
ll t,n;
vector<ll>res;
void process()
{
   cin>>n;
   ll count=0;
   for(ll i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           while(n%i==0)
           {
               res.pb(i);
               n/=i;
           }
       }
   }
   if(n>1) 
   {
       res.pb(n);
   }
   for(ll i=0;i<res.size();i++) cout<<res[i]<<' ';
   cout<<endl;
   res.clear();
}
int main()
{
        faster();
        cin>>t;
        while(t--)
        {
           process();
        }
    return 0;
}