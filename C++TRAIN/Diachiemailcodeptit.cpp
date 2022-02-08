#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (!isalpha(s[i]) && !isdigit(s[i]) && s[i] != '.' && s[i] != ',' && s[i] != '_' && s[i] != '@')
            return 0;
    }
    int pos = -1, cham = -1;
    int count = 0;
    if(s[s.size() - 1] == '.') return 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '@')
        {
            pos = i;
            count++;
        }
        else if (s[i] == '.')
            cham = i;
    }
    if (pos == -1 || cham == -1) return 0;
    int nameCount = 0, mienCount = 0;
    for (int i = 0; i < pos; i++)
        nameCount++;
    for (int i = pos + 1; i < s.size(); i++)
        mienCount++;
        
        if(count == 0||count > 1) return 0;
    if (nameCount > 64 || mienCount > 254) return 0;
    if (pos > cham) return 0;
    return 1;
}
void process()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
}