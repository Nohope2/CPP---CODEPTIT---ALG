#include <iostream>
using namespace std;
int a[100], n, k, stop = 0, step;
void khoitao()
{
    for (int i = 1; i <= k; i++)
        cin >> a[i];
}

void in()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sinh()
{
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i == 0)
        stop = 1;
    else
        a[i]++;
    int p = a[i];
    while (i <= k)
        a[i++] = p++;
}

void tohop()
{
    int cnt = 0;
    while (stop == 0)
    {
        cnt++;
        in();
        sinh();
        if (cnt == step + 2) {
            break;
        }
    }
}

int main()
{
    cin >> n >> k >> step;
    khoitao();
    tohop();
}