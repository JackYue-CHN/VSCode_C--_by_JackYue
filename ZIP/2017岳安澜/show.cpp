#include <bits/stdc++.h>
using namespace std;
int n,k,ans,tmp,t;
int main()
{
	freopen("show.in","r",stdin);
	freopen("show.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	int *d = new int [n + 1];
    memset(d,0,sizeof(d));
    for(int i = 1;i <= n;i++) cin >> d[i];
    sort(d,d + 1 + n);
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= i;j++)
			if(d[i] - d[j] <= k) ans = max(ans,i - j + 1);
	cout << ans << '\n';
	delete [] d;
	return 0;
}
