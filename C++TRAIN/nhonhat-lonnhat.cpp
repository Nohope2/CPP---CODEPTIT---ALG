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
         int m, s;
         cin>>m>>s;
         if (m == 1 && s == 0) cout<<0<<' '<<0;
         else if (s == 0 || 9*m < s) cout<<-1<<' '<<-1;
         else
         {
             string s1, s2;
             FOR(i,m)
             {
                 int x = min(9, s);
                 s -= x;
                 s2+=char(x + '0');
             }
             s1 = s2;
            reverse(s1.begin(), s1.end());
            bool flag = false;
            for (int i = 0; i < m && !flag; i++)
             {                
                 if (s1[i] == '0')
                 {
                     for (int j = i+1; j < m && !flag; j++)
                     {
                        if (s1[j]!='0')
                        {
                             s1[j]--;
                            s1[i]++;
                            flag = true;
                            break;
                        }
                    }
               }
             }        
            cout << s1 << " " << s2;
        }
  return 0;
}