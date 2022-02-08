#include<iomanip>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stdbool.h>
using namespace std;
 
struct People
{
    string name;
    string date;
    string day;
    string month;
    string year; 
};
bool cmp(People a, People b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            return a.day < b.day;
        }
        else return a.month < b.month;
    }
    return a.year < b.year;
}
 
int main()
{
    vector<People> a;
    int n; cin>> n;
    for(int i = 0; i < n; i++)
    {
		People b;
        cin>> b.name >> b.date;
        b.day += b.date[0];
        b.day += b.date[1];
        b.month += b.date[3];
        b.month += b.date[4];
        b.year += b.date[6];
        b.year += b.date[7];
        b.year += b.date[8];
        b.year += b.date[9];
        a.push_back(b);
    }
    sort(a.begin(),a.end(),cmp);
    cout<< a[n-1].name << endl;
    cout<< a[0].name << endl;
}