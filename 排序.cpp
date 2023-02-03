#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000001],n;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];
	sort(a,a + 1 + n);
	for(int i = 1;i <= n;i++) cout << a[i] << " ";
	return 0;
}
