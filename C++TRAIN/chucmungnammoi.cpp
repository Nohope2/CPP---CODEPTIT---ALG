#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    set<string>num;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        num.insert(s);
    }
    cout<<num.size();
}