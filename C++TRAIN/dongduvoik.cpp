#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    int miz = 999999999;
    FOR(i,n) {
        cin >> a[i];
        miz = min(miz , a[i]);
    }
    FOR(i,n) a[i] -= miz;
    int ucln = a[0];
    for(int i=1;i<n;i++) ucln = __gcd(ucln , a[i]);
    int res = 0;
    for(int i=1;i<=sqrt(ucln);i++){
        if (ucln % i == 0){
            if (i!= ucln/i) res+=2;
            else res++;
        }
    }
    cout << res << endl;
}
 
int main(){
    faster();
    int T;
    cin >> T;
    while(T--){
        process();
    }
    return 0;
} 