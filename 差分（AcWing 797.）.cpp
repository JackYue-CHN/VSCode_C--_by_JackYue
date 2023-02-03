#include <bits/stdc++.h>
using namespace std;
int n,m,a[100001],l,r,delta,i;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(i = 1;i <= n;i++)
        cin >> a[i];
    while(m--)
    {
        cin >> l >> r >> delta;
        for(i = l;i <= r;i++)
            a[i] += delta;
    }
    for(i = 1;i <= n;i++)
        cout << a[i] << " ";
    return 0;
}
