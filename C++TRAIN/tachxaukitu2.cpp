#include <bits/stdc++.h>
using namespace std;
 
void tokenize(string s, string del = " ")
{
    int start = 0;
    int end = s.find(del);
    while (end != -1) {
        cout << s.substr(start, end - start) << endl;
        start = end + del.size();
        end = s.find(del, start);
    }
    cout << s.substr(start, end - start);
}
int main(int argc, char const* argv[])
{
    // Takes C++ string with any separator
    string a = "Hi$%do$%you$%do$%!";
    tokenize(a, "$%");
    cout << endl;
 
    return 0;
}