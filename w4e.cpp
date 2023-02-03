#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,q,a[1011][1011],b[1011][1011],c,d,e,f;
signed main()
{
    cin >> n >> m >> q;
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= m;j++)
            cin >> b[i][j];
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= m;j++)
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
    while(q--)
    {
        cin >> c >> d >> e >> f;
        cout << b[e][f] - b[c - 1][f] - b[e][d - 1] + b[c - 1][e - 1]
        << endl;
    }
    return 0;
}
