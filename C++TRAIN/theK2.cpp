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
        vector<int> a(n),res(n);
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(st.size() && a[i] < a[st.top()]) st.pop();
            if(st.empty()) res[i] = a[i];
            else res[i] = a[i]-a[st.top()];
            st.push(i);
        }
        for(int i=0;i<n;i++) cout<< res[i] << ' ';
        printf("\n");
    }
}