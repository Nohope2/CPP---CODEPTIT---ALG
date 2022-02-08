#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int count2 = 0;
        int check = 0;
        for(int i = 2; i*i <= n; i++)
        {
            int count = 0;
            while(n % i == 0)
            {
                n /= i;
                count++;
            }
            if(count > 1)
            {
                check = 1;
                break;
            }
            else if(count != 0) count2++;
        }
        if(n > 1) count2++;
        if(check == 1 || count2 > 3||count2<3) cout<< 0 << endl;
        else cout<< 1 << endl;
 
       //cout<< count2 << " " << check << endl;
    }
}