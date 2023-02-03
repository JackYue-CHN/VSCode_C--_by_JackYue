#include <bits/stdc++.h>
using namespace std;
const int N = 201;
int n, a[N];
int ans = 0;
int main()
{
    freopen("stick.in", "r", stdin);
    freopen("stick.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            for (int k = j + 1; k <= n; k++)
                if (a[i] + a[j] > a[k] and a[i] + a[k] > a[j]
				and a[j] + a[k] > a[i])
					ans++;
    cout << ans;
    return 0;
}
