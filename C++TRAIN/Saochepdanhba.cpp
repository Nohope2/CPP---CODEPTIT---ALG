#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
bool checkngay(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '/')
			return 1;
	}
	return 0;
}
struct data
{
	string ngay, ten, so;
	void setNgay(string x)
	{
		string s;
		f0(i,sz(x))
		{
			if ((x[i] >= '0' && x[i] <= '9') || x[i] == '/')
			{
				s.push_back(x[i]);
			}
		}
		ngay = s;
	}
	void setTen(string x)
	{
		ten = x;
	}
	void setSo(string x)
	{
		so = x;
	}
	void Output()
	{
		cout << ten << ": " << so << " " << ngay << "\n";
	}
	string getTen()
	{
		return ten;
	}
};

bool cmp(data a, data b)
{
	string x = a.getTen(), y = b.getTen();
	vector<string> xx, yy;
	string u;
	f0(i,sz(x))
	{
		if (x[i] != ' ')
			u.push_back(x[i]);
		else
		{
			xx.push_back(u);
			u.clear();
		}
	}
	xx.push_back(u);
	u.clear();
	f0(i,sz(y))
	{
		if (y[i] != ' ')
			u.push_back(y[i]);
		else
		{
			yy.push_back(u);
			u.clear();
		}
	}
	yy.push_back(u);
	u.clear();
	if (xx[sz(xx) - 1] == yy[sz(yy) - 1])
	{
		return xx < yy;
	}
	return xx[sz(xx) - 1] < yy[sz(yy) - 1];
}
int main()
{
	freopen("SOTAY.txt", "r", stdin);
	freopen("DIENTHOAI.txt", "w", stdout);
	int dem = 1;
	string s, ngay;
	data a;
	vector<data> res;
	while (getline(cin, s))
	{
		if (checkngay(s) == 1) ngay = s;
		else
		{
			if (dem == 1)
			{
				a.setTen(s);
				a.setNgay(ngay);
			}
			else
			{
				a.setSo(s);
				a.setNgay(ngay);
			}
			dem++;
		}
		if (dem > 2)
		{
			res.push_back(a);
			dem = 1;
		}
	}
	sort(res.begin(), res.end(), cmp);
	f0(i,sz(res)) res[i].Output();
	return 0;
}