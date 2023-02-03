#include <bits/stdc++.h>
using namespace std;
int n, state[1010], ans = 1;

void DFS(int u)
{
    int mid = u >> 1;
    for(int i = 1;i <= mid;i++)
    {
        ans++;
        DFS(i);
    }
}

int main()
{
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d", &n);
    DFS(n);
    printf("%d", ans);
    return 0;
}
