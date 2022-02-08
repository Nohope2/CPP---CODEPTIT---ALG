
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
struct node
{
   string name,unit,ma;
   int dau,cuoi,gia,sodien,indm,vdm,vat,sum;
}a[100];
string chuanhoa(string s)
{
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string t="";
    vector<string>b;
    f0(i,s.size())
    {
        if(s[i]==' ')
        {
            b.pb(t);
            t="";
        }
        else t=t+s[i];
    }
    b.pb(t);
    string ans="";
    f0(i,b.size())
    {
        if(b[i]!="")
        {
            b[i][0]-=32;
            ans=ans+b[i]+' ';
        }
    }
    return ans;
}
bool ss(node a,node b)
{
    return a.sum>b.sum;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  f1(i,n)
  {
      cin.ignore();
      getline(cin,a[i].name);
      cin>>a[i].unit>>a[i].dau>>a[i].cuoi;
      a[i].name=chuanhoa(a[i].name);
      a[i].ma=to_string(i);
      if(a[i].ma.size()<2) a[i].ma='0'+a[i].ma;
      a[i].ma="KH"+a[i].ma;
      if(a[i].unit=="A") a[i].gia=100;
      else if(a[i].unit=="B") a[i].gia=500;
      else a[i].gia=200;
      a[i].sodien=a[i].cuoi-a[i].dau;
      if(a[i].sodien<a[i].gia)
      {
          a[i].indm=a[i].sodien*450;
          a[i].vdm=0;
      }
      else
      {
          a[i].indm=a[i].gia*450;
          a[i].vdm=(a[i].sodien-a[i].gia)*1000;
      }
      if(a[i].sodien==a[i].gia) a[i].vdm=0;
      a[i].vat=a[i].vdm/20;
      a[i].sum=a[i].indm+a[i].vdm+a[i].vat;
   }
   sort(a+1,a+n+1,ss);
   f1(i,n)
   {
       cout<<a[i].ma<<' '<<a[i].name<<a[i].indm<<' '<<a[i].vdm<<' '<<a[i].vat<<' '<<a[i].sum<<'\n';
   }
}