#include<bits/stdc++.h>
using namespace std;
long long process( long long n, long long r, long long b, long long g)
{
    long long a[1005];
    a[0] = 1;
    for (int i = 1; i <= n; i++) a[i] = a[i-1] * i;
    long long left = n - (r+g+b);
    long long sum = 0;
    for (int i = 0; i <= left; i++)
    {
        for (int j = 0; j<= left-i; j++)
        {
            long long k = left - (i+j);
            sum = sum + a[n] /(a[i+r]*a[j+b]*a[k+g]);
        }
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r,b,g;
        cin>>n>>r>>b>>g;
        cout << process(n, r, b, g)<<endl;
    }
    return 0;
}