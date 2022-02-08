#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
string add(string a,string b)
{
   while(a.size()<b.size()) a='0'+a;
   while(b.size()<a.size()) b='0'+b;
   int nho=0;
   string kq="";
   for(int i=b.size()-1;i>=0;i--)
   {
      nho=nho+(a[i]-'0')+(b[i]-'0');
      char k=nho%10+'0';
      kq=k+kq;
      nho/=10;
   }
   if(nho>0) kq='1'+kq;
   return kq;
}
void xuly()
{
    char p,q;
    cin>>p>>q;
    string a,b;
    cin>>a>>b;
    string s1=a,s2=b;
    f0(i,a.size())
    {
       if(a[i]==p) a[i]=q;
    }
    f0(i,b.size())
    {
       if(b[i]==p) b[i]=q;
    }
    string t=add(a,b);
    f0(i,s1.size())
    {
       if(s1[i]==q) s1[i]=p;
    }
    f0(i,s2.size())
    {
       if(s2[i]==q) s2[i]=p;
    }
    string ans=add(s1,s2);
    cout<<min(t,ans)<<' '<<max(ans,t)<<'\n';
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
}