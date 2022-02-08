#include <bits/stdc++.h>
using namespace std;
int t, n, k, a[1000001];
 
void init()
{
    cin>>n>>k;
    for(int i = 0; i < n*n; i++)
        cin>>a[i];
}
void process(){
    n*=n;
    sort(a, a+n);
    k--;
    cout<<a[k]<<endl;
}
int main(){

    cin>>t;
    while (t--)
    {
        init();
        process();
    }
 
}