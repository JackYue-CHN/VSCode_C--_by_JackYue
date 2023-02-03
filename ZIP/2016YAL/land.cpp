#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
    freopen("land.in","r",stdin);
    freopen("land.out","w",stdout);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    int begin = min(a,min(b,min(c,d)));
    int end = max(a,max(b,max(c,d)));
    printf("%d",end - begin);
    return 0;
}