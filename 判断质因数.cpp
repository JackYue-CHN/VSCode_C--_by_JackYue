#include <bits/stdc++.h>
#define MAXN 100
using namespace std;
int n, s[201], i = 2, t = 0;
bool state;
int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d", n);
        return 0;
    }
    while (n != 1)
    {
        if (n % i == 0)
        {
            t++;
            n /= i;
        }
        else
        {
            if (t > 0)
            {
                printf("%d", i);
                if (t != 1)
                    printf("^%d", t);
                putchar('*');
                t = 0;
            }
            i++;
        }
    }
    if (t > 0)
    {
        printf("%d", i);
        if (t != 1)
            printf("^%d", t);
        t = 0;
    }
    return 0;
}
