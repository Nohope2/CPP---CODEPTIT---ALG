#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
struct node
{
    long long val;
    long long level;
};
long long BFS(long long x)
{
    set<long long> st;
    queue<node> q;
    node n = {x, 0};
    q.push(n);
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        if (t.val == 1) return t.level;
        st.insert(t.val);
        if (t.val-1 == 1) return t.level+1;
        long long a,b;
    
            for(int i=2;i<=sqrt(t.val);i++)
            {
                if(i>=2)
                {
                    if(t.val%i==0)
                    { 
                        a=i;b=t.val/i;
                    }
                }
            }
        long long col=max(a,b);
        if (st.find(col) == st.end())
        {
            n.val = col;
            n.level = t.level+1;
            q.push(n);
        }
        if (t.val-1>2 && st.find(t.val-1) == st.end())
        {
            n.val = t.val-1;
            n.level = t.level+1;
            q.push(n);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       long long x,y;
       cin>>x;
    cout << BFS(x)<<endl;
    }
    return 0;
}