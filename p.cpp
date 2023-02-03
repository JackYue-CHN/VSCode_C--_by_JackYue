#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b,s = 1;
int main()
{
	//freopen("pow.in","r",stdin);
	//freopen("pow.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b;
	for(int i = 1;i <= b;i++)
	{
		s *= a;
		if(s > int(1e9))
		{
			cout << -1;
			return 0;
		}
	}
	cout << s;
	return 0;
}
