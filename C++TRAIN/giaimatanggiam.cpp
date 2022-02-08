#include <bits/stdc++.h>
using namespace std;
void process(string tmp)
{
    string res;
    stack<int> stk;
    for (int i = 0; i <= tmp.length(); i++)
    {
        stk.push(i + 1);
        if (i == tmp.length() || tmp[i] == 'I')
        {
            while (!stk.empty())
            {
                res+=to_string(stk.top());
                stk.pop();
            }
        }
    }
 
    cout <<res<< endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        process(s);
    }
    return 0;
}