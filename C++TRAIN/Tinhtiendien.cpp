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
struct DATA
{
    string name;
    string id;
    char type;
    ll st;
    ll en;
    ll dinhmuc;
    ll tien1;
    ll tien2;
    ll VAT;
    ll Sum = 0;
};

bool cmp(DATA a, DATA b)
{
    return a.Sum > b.Sum;
}

#pragma region Run
void Run()
{
    vector<DATA> res;
    int n;
    cin >> n;
    string tmp_name;

    for (int i = 1; i <= n; i++)
    {
        DATA tmp;
        cin.ignore();
        tmp_name = "";
        getline(std::cin, tmp_name);

        stringstream ss(tmp_name);
        string token;
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            for (int j = 1; j < token.length(); j++)
            {
                token[j] = tolower(token[j]);
            }
            tmp.name += token;
            tmp.name += " ";
        }
        tmp.name.pop_back();

        cin >> tmp.type;
        cin >> tmp.st >> tmp.en;

        if (tmp.type == 'A')
        {
            tmp.dinhmuc = 100;
        }
        else if (tmp.type == 'B')
        {
            tmp.dinhmuc = 500;
        }
        else
        {
            tmp.dinhmuc = 200;
        }
        ll tmp_dinhmuc = tmp.en - tmp.st;

        if (tmp_dinhmuc > tmp.dinhmuc)
        {
            tmp.tien1 = tmp.dinhmuc * 450;
            tmp.tien2 = (tmp_dinhmuc - tmp.dinhmuc) * 1000;
        }
        else
        {
            tmp.tien1 = tmp_dinhmuc * 450;
            tmp.tien2 = 0;
        }
        tmp.VAT = tmp.tien2 / 20;
        tmp.Sum = tmp.tien1 + tmp.tien2 + tmp.VAT;

        if (i < 10)
        {
            tmp.id = "KH0" + to_string(i);
        }
        else
        {
            tmp.id = "KH" + to_string(i);
        }

        res.push_back(tmp);
    }

    sort(res.begin(), res.end(), cmp);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].id << " " << res[i].name << " " << res[i].tien1 << " "
             << res[i].tien2 << " " << res[i].VAT << " " << res[i].Sum << endl;
    }
}
#pragma endregion

int main()
{
    faster();
        Run();
}