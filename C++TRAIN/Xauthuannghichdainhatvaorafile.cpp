#include <bits/stdc++.h>
#include <fstream>
using namespace std;
 
bool isOK(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return s == temp;
}
 
bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
    return a.second.first < b.second.first;
}
 
int main() {
    ifstream fin;
    fin.open("VANBAN.in");
    map<string, pair<int, int>> mp;
    string s, res;
    int index = 0, count = 0, maxLength = 0;
 
    while (fin >> s) {
        if (isOK(s)) {
            if (mp.find(s) != mp.end())
                mp[s].second++;
            else
                mp[s] = {index, 1};
            index++;
            maxLength = max(maxLength, (int)s.length());
        }
    }
 
    vector<pair<string, pair<int, int>>> v;
    for (auto x : mp) {
        if (x.first.length() == maxLength) {
            v.push_back(x);
        }
    }
 
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second.second << endl;
    }
 
    return 0;
}