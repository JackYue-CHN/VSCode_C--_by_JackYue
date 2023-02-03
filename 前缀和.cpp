#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[10001],b[10001],l,r,i;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(i = 1;i <= n;i++) cin >> a[i];
    for(i = 1;i <= n;i++) b[i] = b[i - 1] + a[i];
    while(m--)
    {
        cin >> l >> r;
        cout << b[r] - b[l + 1] << endl;
    }
    return 0;
}
