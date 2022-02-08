#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty() || (s.top() + a[i]) % 2 != 0)
            s.push(a[i]);
        else
            s.pop();
    }
    cout << s.size() << endl;
    return 0;
}
