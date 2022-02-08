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
 string s; 
int main()
{
  faster();
  int t,k;
   cin >> t; 
   while(t--) 
   { 
       cin >> s >> k; 
       bool check[1005] = {false}; 
       FOR(i,sz(s)) check[s[i]] = true; 
       int dem = 0; 
       for(int i = 'a'; i <= 'z'; i++) if(!check[i]) dem++; 
        if(k >= dem) cout << 1; 
        else cout << 0;
    cout<<endl;
  }
  return 0;
}