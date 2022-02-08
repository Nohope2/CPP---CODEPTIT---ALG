#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int A1[1000005],A2[1000005],ans[1000005];;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        for(int i=0;i<N;i++) cin>>A1[i];
        for(int i=0;i<M;i++) cin>>A2[i];
        map<int, int> mp;
        int ind = 0;
    for (int i = 0; i < N; i++) mp[A1[i]]++;
    for (int i = 0; i < M; i++)
    {
        if (mp[A2[i]] != 0) {
            for (int j = 1; j <= mp[A2[i]]; j++)
                ans[ind++] = A2[i];
        }
        mp.erase(A2[i]);
    }
    for (auto it : mp) {
        for (int j = 1; j <= it.second; j++)
            ans[ind++] = it.first;
    }
        for (int i = 0; i < N; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
 
    return 0;
}