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
ll check(ll sum,queue<ll> q0, queue<ll> q1, queue<ll> q2)
{
    if ((sum % 3) == 1) 
    {
        if (!q1.empty()) q1.pop();
        else
         {
            if (!q2.empty()) q2.pop();
            else return 0;
            if (!q2.empty()) q2.pop();
            else return 0;
        }
    }
    else if ((sum % 3) == 2) {
        if (!q2.empty()) q2.pop();
        else 
        {
            if (!q1.empty()) q1.pop();
            else return 0;
            if (!q1.empty()) q1.pop();
            else return 0;
        }
    }
         priority_queue<ll,vll>pq;
            ll sum1=0;
            while (!q0.empty())
            {
                pq.push(q0.front());
                sum1+=q0.front(); q0.pop();
            }
           while (!q1.empty())
            {
                    pq.push(q1.front());
                    sum1+=q1.front(); q1.pop();
            }
          while (!q2.empty())
            {
                pq.push(q2.front());
                sum1+=q2.front();
                 q2.pop();
            }
            if(!pq.empty())
            {
               if(sum1==0) cout<<0<<endl;
               else
               {
                   while(!pq.empty())
                   {
                       cout<<pq.top();pq.pop();
                   }
                   cout<<endl;
               }
            } 
            else cout<<-1<<endl;
    return 1;
}
int main()
{
    faster()
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<ll,vll,greater<ll> >res;
        ll n;cin>>n;
        FOR(i,n)
        {
            ll tmp;cin>>tmp;
            res.push(tmp);
        }
        queue<ll> q0,q1,q2;
        ll sum=0;
       while(!res.empty())
        {
            ll x=res.top();res.pop();
            sum +=x;
            if ((x%3) == 0) q0.push(x);
            else if ((x % 3) == 1) q1.push(x);
            else q2.push(x);
        }
        if(check(sum,q0,q1,q2)==0) cout<<-1<<endl;
    }
    return 0;
}