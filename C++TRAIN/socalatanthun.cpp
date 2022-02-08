
#include <iostream>
using namespace std;
unsigned long long pidiche(unsigned long long n, unsigned long long k)
{
    unsigned long long res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
unsigned long long catalan(unsigned long long n)
{
    unsigned long long c = pidiche(2 * n, n);
    return c / (n + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    unsigned long long n;
    cin>>n;
   cout <<catalan(n+1);
    return 0;
}