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
 string Hieu(string a,string b)
 { 
     string res; 
     int check=0; 
     while(a.size()<b.size()) a="0"+a; 
     while(a.size()>b.size()) b="0"+b; 
     bool ok=false;
      if(a<b) swap(a,b); 
     int len=a.size()-1; 
     FOD(i,len,0)
     { 
         int val=int (a[i]-'0')-int(b[i]-'0')-check; 
         if(val<0) 
         {
             res=char(val+10+'0')+res; check=1; 
         }
        else 
        {
            res=char(val+'0')+res; check=0; 
        }
      }
      return res; 
} 
int main ()
{ 
    faster();
    int t; 
    cin>>t; 
    while(t--)
    { 
        string a,b; 
        cin>>a>>b; 
        cout<<Hieu(a,b)<<endl; 
     }
       return 0;
}