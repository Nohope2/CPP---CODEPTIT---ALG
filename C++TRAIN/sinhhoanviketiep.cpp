#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    string s = "568397421";
    int n;
    n = 9;
    a[n] = {};
    while (next_permutation(s.begin(), s.end())) {
        cnt++;
        for (char i : s) {
            cout << i << " ";
        }
        cout << endl;
        if (cnt == 4) {
            break;
        }
    }
}