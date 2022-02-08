#include <bits/stdc++.h>
using namespace std; 
int swapss(int arr[],int n,int k){  
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k) 
            ++count; 
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k) bad++; 
    int index = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) {  
        if (arr[i] > k) bad--;  
        if (arr[j] > k) bad++; 
        index = min(index, bad); 
    } 
    return index; 
}
int main()
{ 
    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<swapss(arr,n,k)<< endl;
    } 
    return 0; 
}   