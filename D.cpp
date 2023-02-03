#include <bits/stdc++.h>
using namespace std;
int n, k, ans[5000010], cnt, a, b, c;
bool isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (!(n % i)) return 0;

    return 1;
}
void dfs(int u)
{
    if (u == n)
    {
        if (cnt != r)
            return;

        for (int i = 0; i < 3; i++)
        {
            printf("%3d", ans[i]);
        }

        return;
    }

    ans[cnt] = u + 1;
    cnt++;
    dfs(u + 1);
    cnt--;
    dfs(u + 1);
}
int main()
{
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ans[i]);
    }


    return 0;
}
