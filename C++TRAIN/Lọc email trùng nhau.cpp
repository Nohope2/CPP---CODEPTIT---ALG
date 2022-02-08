#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<string, greater<string> > st;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
                s[i] += 32;
        }
        st.insert(s);
    }
    //for (string x : st) cout << x << endl;
}