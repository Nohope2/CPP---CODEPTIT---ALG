#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > danhdau;
// danh dau de ko di lai lan nua
vector<vector<int> > trace;
// luu vi tri da di toi tuc la buoc truoc do
// quy uoc di xuong thi trace =0
// di sang thi trace=1
vector<vector<int> > a;
string res="";    
int n;

void init() // resize cac mang
{
	res="";
	a.resize(n+2, vector<int> (n+2, 0));
	danhdau.resize(n+2, vector<int> (n+2, 0));
	trace.resize(n+2, vector<int> (n+2, 0));
}

void truyvet(int x, int y) // truy vet nguoc tu vi tri [n][n] nen se lui dan
{
	if(x==1 && y==1) return;
	if(trace[x][y]==1) // neu ma dang di len
	{
		res="D"+res;
		truyvet(x-1,y);
	}
	else // neu ko thi la sang trai
	{
		res="R"+res;
		truyvet(x,y-1);
	}
}

void loang()
{
	queue<pair <int, int> > q;
	q.push({1,1});// dua vao 2 vi tri hang va cot
	danhdau[1][1]=1; // danh dau la da di qua
	while(q.size()>0)
	{
		int x=q.front().first; // lay vi tri hang ra
		int y=q.front().second;// lay vi tri cot ra
		q.pop();
		if(x==n && y==n) 
		{
			truyvet(n,n);
			cout << res;
			return;
		}
		if(a[x+1][y]==1 && danhdau[x+1][y]==0) // uu tien di xuong trc
		{
			q.push({x+1,y});
			danhdau[x+1][y]=1;
			trace[x+1][y]=1; // luu vet lai de lat nua se tim cach di toi uu nhat
		}
		if(a[x][y+1]==1 && danhdau[x][y+1]==0) // ko dc thi moi di sang ngang
		{
			q.push({x,y+1});
			danhdau[x][y+1]=1;
			trace[x][y+1]=0; // luu vet lai
		}
	}
	cout << -1; // ko the di duoc den dich thi in ra -1
}

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	cin >> n;
	init();
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++) 
		{
			cin >> a[i][j];
		}
	}
	if(a[1][1]==0) cout << -1;
	else loang();
}