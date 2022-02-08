#include <iostream>
#include <vector>
#include <deque>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
 
vector <long long> a;
vector <long long> dp;
int n, k;
 
void solve(){
    a.clear();
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    dp.clear();
    dp.resize(n, 0);
    dp[0] = a[0];
    deque <pair <long long, long long> > q;
    q.push_back(make_pair(dp[0], 0));
 
    for(int i = 1; i < n; i++){
        dp[i] = a[i] + q.front().first;
 
        while (!q.empty() && q.back().first < dp[i]) q.pop_back();
 
        q.push_back({dp[i], i});
        if (i - k == q.front().second){
            q.pop_front();
        }
    }
    cout << dp[n-1]<<endl;
}
int main ()
{
  faster();
    int T ;
    cin >> T;
    while (T--) solve();
 
 
}