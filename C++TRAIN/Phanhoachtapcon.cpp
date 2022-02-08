#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
int s,n,dem = 0;
int a[105];
bool ok[105];
bool check  = false;
void Try(int sum, int dem,int &dem1)
{
    if(dem == 3)
    {
        dem1++;
        Try(0,0,dem1);
    }
     f1(i,1,n)
     {
         if(ok[i] == false)
         {
             ok[i] = true;
             if(sum == s)
             {
                 Try(0, dem + 1,dem1);
             }
             else Try(sum + a[i],dem,dem1);
         }
         ok[i] = false;
     }
}
int main()
{
  faster();
  int t;
  cin >> t;
  while(t--)
  {
     s = 0;
     int dem1 = 0;
     cin >> n;
     f1(i,1,n) 
     {
        cin >> a[i];
        ok[i] = false;
        s += a[i];
     }
     if(s % 3 != 0) cout << "0";
     else 
     {
         s /= 3;
         Try(0,0,dem1);
         cout << dem1;
     }
     cout << endl;
  }
  return 0;
}