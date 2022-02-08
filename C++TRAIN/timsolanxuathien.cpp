#include <iostream>
#include <map>
#define endl "\n"
using namespace std;
int a[1003];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int, int> cnt;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i = 0; i < n;i++) cnt[a[i]]++;
        if(cnt[k]==0) cout<<0<<endl;
        else cout<<cnt[k]<<endl;
    }
}