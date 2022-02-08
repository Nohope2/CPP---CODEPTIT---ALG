#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctype.h>
#define ll long long
#define endl "\n"
const int oo = 1e9 + 7;
using namespace std;

int nto(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    if (!nto(n))
    {
        cout << "No";
        return;
    }
    int reverse = 0;
    int sum = 0;
    int k = 1;
    while (n > 0)
    {
        int tmp = n % 10;
        if (!nto(tmp))
        {
            cout << "No";
            return;
        }
        sum += tmp;
        reverse = tmp * k + reverse;
        k *= 10;
        n /= 10;
    }
    if (!nto(sum))
    {
        cout << "No";
        return;
    }
    if (!nto(reverse))
    {
        cout << "No";
        return;
    }
    cout << "Yes";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}