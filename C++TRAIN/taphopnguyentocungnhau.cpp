#include <bits/stdc++.h>
using namespace std;
bool NTO(long long n, long long m)
{
   unsigned long long sumMax = (n * (n + 1)) / 2;
   unsigned long long sum1 = (sumMax + m) / 2;
   unsigned long long sum2 = sumMax - sum1;
    if (sumMax < m) return false;
    if (sum1+sum2==sumMax&&sum1-sum2==m)
    return (__gcd(sum1,sum2)== 1);
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long m,n;
        cin>>n>>m;
        if (NTO(n, m)) cout << "Yes"<<endl;
        else cout << "No"<<endl;
    }
 
    return 0;
}