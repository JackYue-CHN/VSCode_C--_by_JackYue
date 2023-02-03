// Problem: CF6E Exposition
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/CF6E
// Memory Limit: 62 MB
// Time Limit: 1500 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
inline int read(){int x=0,f=1;char ch=getchar();
while(ch<'0'||ch>'9'){if(ch=='-')f=-1;
ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+
(x<<3)+(ch^48);ch=getchar();}return x*f;}
//#define M
//#define mo
#define N 100010
struct node
{
	int x, id;
}mn[N], mx[N];
int n, m, i, j, k;
int a[N], x, y;
int topxr, topxl, topyr, topyl;
int ans, num, l, r;

signed main()
{
//	freopen("tiaoshi.in", "r", stdin);
//	freopen("tiaoshi.out", "w", stdout);
	n=read(); k=read();
	for(i=1; i<=n; ++i) a[i]=read();
	memset(mn, topxl=topxr=0, sizeof(mn));
	memset(mx, topyl=topyr=0, sizeof(mx));
	mn[++topxr].x=a[1]; mn[topxr].id=1;
	mx[++topyr].x=a[1]; mx[topyr].id=1;
	for(l=r=1; l<=n; ++l)
	{
		if(l-1&&mn[topxl+1].id==l-1) ++topxl;
		if(l-1&&mx[topyl+1].id==l-1) ++topyl;
		x=mn[topxl+1].x; y=mx[topyl+1].x;
		while(r<n && (abs(a[r+1]-x)<=k || topxl==topxr) && (abs(a[r+1]-y)<=k || topyl==topyr))
		{
			++r;
			while(topxr>topxl && mn[topxr].x>a[r]) --topxr;
			mn[++topxr].x=a[r]; mn[topxr].id=r;
			while(topyr>topyl && mx[topyr].x<a[r]) --topyr;
			mx[++topyr].x=a[r]; mx[topyr].id=r;
			x=mn[topxl+1].x; y=mx[topyl+1].x;
		}
		if(r-l+1>ans) ans=r-l+1, num=0;
		if(r-l+1==ans) ++num;
		// printf("%lld %lld\n", topxl, topyl);
		// printf("> %lld %lld\n", l, r);
	}
	printf("%lld %lld\n", ans, num);

	memset(mn, topxl=topxr=0, sizeof(mn));
	memset(mx, topyl=topyr=0, sizeof(mx));
	mn[++topxr].x=a[1]; mn[topxr].id=1;
	mx[++topyr].x=a[1]; mx[topyr].id=1;
	// printf("%lld %lld %lld %lld\n", topxl, topxr, topyl, topyr);
	for(l=r=1; l<=n; ++l)
	{
		if(l-1&&mn[topxl+1].id==l-1) ++topxl;
		if(l-1&&mx[topyl+1].id==l-1) ++topyl;
		x=mn[topxl+1].x; y=mx[topyl+1].x;
		while(r<n && (abs(a[r+1]-x)<=k || topxl==topxr) && (abs(a[r+1]-y)<=k || topyl==topyr))
		{
			++r;
			while(topxr>topxl && mn[topxr].x>a[r]) --topxr;
			mn[++topxr].x=a[r]; mn[topxr].id=r;
			while(topyr>topyl && mx[topyr].x<a[r]) --topyr;
			mx[++topyr].x=a[r]; mx[topyr].id=r;
			x=mn[topxl+1].x; y=mx[topyl+1].x;
		}
		if(r-l+1==ans) printf("%lld %lld\n", l, r);
		// printf("> %lld %lld\n", l, r);
	}
	return 0;
}
