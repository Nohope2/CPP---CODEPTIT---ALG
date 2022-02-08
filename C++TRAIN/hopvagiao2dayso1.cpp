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
         int n,m;
         cin>>n>>m; 
         int a[n],b[m]; 
         set<int>s,q; 
        FORS(i,1,n)
        { 
             cin>>a[i];
              s.insert(a[i]); 
        } 
        int k=0;
        FORS(i,1,m)
        { 
            cin>>b[i]; 
            s.insert(b[i]);
            if(n+i-s.size()!=k)
            { 
                q.insert(b[i]);
                k++; 
            }
        } 
        for(int x:s) cout<<x<<" "; 
        cout<<endl; 
        for(int y:q) cout<<y<<" ";
         cout<<endl; 
      }
}