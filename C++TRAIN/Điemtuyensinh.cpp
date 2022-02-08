#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <ctype.h>
#include <iomanip>
#define ll long long
#define endl "\n"
const int oo = 1e9 + 7;
using namespace std;

string chuanHoa(string src)
{
    string out = "", tmp;
    stringstream ss;
    ss << src;
    while (ss >> tmp)
    {
        for (int i = 1; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        tmp[0] = toupper(tmp[0]);
        out = out + tmp + " ";
    }
    return out;
}
int ID = 1;
struct TS
{
    int id;
    string name;
    double grade;
    string typical;
    int khuvuc;
    double sum;
};
void solve()
{
    int n;
    cin >> n;
    TS a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].id = ID, ID++;
        scanf("\n");
        getline(cin, a[i].name);
        a[i].name = chuanHoa(a[i].name);
        cin >> a[i].grade;
        scanf("\n");
        getline(cin, a[i].typical);
        cin >> a[i].khuvuc;
        a[i].sum = a[i].grade;
        if (a[i].khuvuc == 1)
            a[i].sum += 1.5;
        else if (a[i].khuvuc == 2)
            a[i].sum += 1.0;
        if (chuanHoa(a[i].typical) != "Kinh ")
            a[i].sum += 1.5;
    }
    sort(a, a + n, [](TS x, TS y)
         {
             if (x.sum == y.sum)
                 return x.id < y.id;
             return x.sum > y.sum;
         });
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++)
    {
        cout << "TS";
        if (a[i].id < 10)
            cout << "0";
        cout << a[i].id << " " << a[i].name << a[i].sum << ((a[i].sum < 20.5) ? " Truot" : " Do") << endl;
    }
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}