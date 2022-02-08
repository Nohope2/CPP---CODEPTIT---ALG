#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        int n; 
        cin>> n;
        vector<int> a(n);
        int res[n+5];
        memset(res,-1,sizeof(res));
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(st.size()>0&& a[i]>a[st.top()])
            {
                res[st.top()]=a[i];
                st.pop();
            }
            st.push(i);
        }
        int k=1;
       for(int i=0;i<n;i++) 
       {
        if(res[i]!=-1)
        {
            cout<<res[i];k=0;
        }
       }
       if(k) cout<<"-1";
       cout<<endl;
    }
}