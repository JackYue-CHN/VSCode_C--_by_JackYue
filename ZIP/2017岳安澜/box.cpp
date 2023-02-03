#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,ans;
void change(ll &a,ll &b)
{
	ll tmp = a;
	a = b;
	b = tmp;
}
ll fgcd(ll n,ll m)
{
	ll r;
	while(m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}
	return n;
}
ll lcm(ll a,ll b)
{
	return a * b / fgcd(a,b);
}
int main()
{
	freopen("box.in","r",stdin);
	freopen("box.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b;
	if(a < b) change(a,b);
	ans = lcm(a,b);
	cout << ans << '\n';
	return 0;
}
