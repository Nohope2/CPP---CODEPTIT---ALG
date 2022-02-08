#include <bits/stdc++.h>
using namespace std;
vector<int> a(305, 1);
vector<int> b;
int s, n, p,Sum=0,dem=0,Count=0;
void sangNT()
{
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i <= 302; i++)
    {
        if (a[i] == 1)
        {
            b.push_back(i);
            for (int j=i*i;j<=300;j+=i) a[j] = 0;
        }
    }
}
int chuaxet[1000] = {};
void Try(int i)
{
    if(i+n>b.size()) return;
    if (Sum == s && Count == n)
    {
         dem++;
         return;
    }
    if (Sum > s||Count > n) return;
    for (int j = i; j < b.size(); j++)
    {
        if (chuaxet[j] == 0)
        {
            chuaxet[j] = 1;
            Sum += b[j];
            Count++;
            if (Sum==s&&Count==n) dem++; 
            else Try(j+1);
            chuaxet[j] = 0;
            Sum -= b[j];
            Count--;
        }
    }
}
int main()
{
    sangNT();
    cin >> s >> n >> p;
    int index = lower_bound(b.begin(), b.end(), p) - b.begin();
    if (index==b.size()) cout << "-1";
    else
    {
        Try(index);
        if (dem==0) cout << "-1";
        else cout<<dem;
    }
}