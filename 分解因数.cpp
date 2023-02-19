#include <bits/stdc++.h>
using namespace std;
int n, a[1000010];
int resolve(int t, int num)
{
    if(t == 1) return 1;
    int ans = 1;
    for(int i = num;i * i <= t;i++)
        if(!(t % i)) ans += resolve(t / i, i);
    return ans;
}
int main()
{
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d", &n);
    for(int i = 0;i < n;i++) scanf("%d", &a[i]);
    for(int i = 0;i < n;i++) printf("%d\n", resolve(a[i], 2));
    return 0;
}
