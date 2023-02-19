#include <bits/stdc++.h>
using namespace std;
int k, x;
bool f(int a, int b)
{
    if(a == b) return true;
    else if(a > b || b > 1e6) return false;
    return f(2 * a + 1, b) || f(3 * a + 1, b);
}
int main()
{
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d,%d", &k, &x);
    if(f(k, x)) printf("YES");
    else printf("NO");
    return 0;
}
