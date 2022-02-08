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
bool check(string s)
{
    bool flag = 0;
    int dem = 0,i,ch=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (!isalnum(s[i]) && !isalpha(s[i]) && s[i] != '.' && s[i] != '_' && s[i] != '@')
        {
            return 0;
        }
        if (s[i] == '@')
            dem++;
        if (dem > 1)
            return 0;
    }
    for (i = 0; s[i] != '@'; i++)
    {
        if (isalpha(s[i]) && isalnum(s[i]))
            ch = 1;
        if (i > 64)
            return 0;
    }
    if (ch == 0)
        return 0;
    dem = 0;
    for (int j = i + 1; j < s.length(); j++)
    {
        if (s[j] == '.')
            flag = 1;
        dem++;
        if (dem > 254)
            return 0;
    }
    if (flag == 0)
        return 0;
    if (s[s.length() - 1] == '.')
        return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
         string s;
        getline(cin, s);
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}