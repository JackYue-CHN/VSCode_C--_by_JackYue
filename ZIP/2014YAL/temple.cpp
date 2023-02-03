#include <bits/stdc++.h>
using namespace std;
int a,b,n,i,j;
int main()
{
    freopen("temple.in","r",stdin);
    freopen("temple.out","w",stdout);
    scanf("%d",&n);
    int *st = new int [n + 1];
    for(i = 1;i <= n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j = a;j <= b;j++)
            st[j]++;
    }
    sort(st + 1,st + 1 + n);
    cout << st[n];
    delete [] st;
    return 0;
}