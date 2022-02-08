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
string chuanHoa(int a)
{
	string tmp = "";
	while (a)
	{
		tmp = (char)(a % 10 + '0');
		a /= 10;
	}
	while (tm.size() < 3)
		tmp = '0' + tmp;
	return tmp;
}

class TheLoai
{
public:
	string ma, name;
	static int ID;
	friend istream &operator>>(istream &input, TheLoai &obj)
	{
		TheLoai::ID++;
		obj.ma = "TL" + chuanHoa((TheLoai::ID));
		getline(input, obj.name);
		return input;
	}
};

class Phim
{
public:
	int eps;
	string ma, name, date, kind, xo;
	static int ID;
	friend istream &operator>>(istream &input, Phim &obj)
	{
		Phim::ID++;
		obj.ma = "P" + chuanHoa((Phim::ID));
		input >> obj.kind;
		input >> obj.date;
		cin.ignore();
		getline(input, obj.name);
		input >> obj.eps;
		return input;
	}
	friend ostream &operator<<(ostream &output, Phim &obj)
	{
		cout << obj.ma << " " << obj.kind << " " << obj.date << " " << obj.name << " " << obj.eps << endl;
		return output;
	}
};

int TheLoai::ID = 0;
int Phim::ID = 0;

bool cmp(Phim a, Phim b)
{
	int check[10] = {6, 7, 8, 9, 3, 4, 1, 2};
	f0(i,8)
	{
		if (a.date[check[i]] < b.date[check[i]])
			return 1;
		if (a.date[check[i]] > b.date[check[i]])
			return 0;
	}
	if (a.name < b.name) return 1;
	if (a.name > b.name) return 0;
	if (a.eps > b.eps) return 1;
	return 0;
}

void process(TheLoai tl[], int n, Phim p[], int m)
{
    f0(i,m)
	{
		f0(j,n)
		{
			if ((tl + j)->ma == (p + i)->kind)
			{
				(p + i)->kind = (tl + j)->name;
			}
		}
	}
	sort(p, p + m, cmp);
}

int main()
{
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}