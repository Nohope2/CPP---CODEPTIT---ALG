#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
void process(){
    long long n,k;
    cin >> n >> k;
    int s = 0;
    for(int i=1;i<=n;i++) s += i % k;
    if (s == k) cout << 1 << endl;
    else cout << 0 << endl;
}
int main(){
    faster();
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    return 0;
} 