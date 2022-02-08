#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inp;
    inp.open("CONTACT.in");
    string s;
    set<string, greater<string> > st;
    while (inp >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
                s[i] += 32;
        }
        st.insert(s);
    }
    for (string x : st) cout << x << endl;
    inp.close();
}
/*
  #include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    set<string> se;
    while (getline(cin, s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        se.insert(s);
    }
    for (auto x : se) {
        cout << x << endl;
    }
    return 0;
}
*/