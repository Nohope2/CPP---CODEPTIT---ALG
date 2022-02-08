#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> schedule;
int n, m;

void Try(string s)
{
    if (s.size() == n)
        schedule.push_back(s);
    else
    {
        Try(s + "0");
        Try(s + "1");
    }
}

int main()
{
    cin >> n >> m;
    int a[n][m];
    vector<vector<int>> q(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                q[i].push_back(j);
        }
    }
    Try("");
    int maxx = 0;
    vector<string> p;
    for (int i = 0; i < schedule.size(); i++)
    {
        string s = schedule[i];
        int isChecked[m];
        for (int j = 0; j < m; j++)
            isChecked[j] = 0;
        int check = 1, count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '1')
            {
                for (int k = 0; k < q[j].size(); k++)
                {
                    int h = q[j][k];
                    if (isChecked[h] == 0)
                    {
                        isChecked[h] = 1;
                        count++;
                    }
                    else
                    {
                        check = 0;
                        break;
                    }
                }
            }
            if (check == 0)
                break;
        }
        if (check == 1)
        {
            if (count > maxx)
            {
                maxx = count;
                p.clear();
                p.push_back(s);
            }
            else if (count == maxx)
                p.push_back(s);
        }
        check = 1;
    }
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[i].size(); j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}