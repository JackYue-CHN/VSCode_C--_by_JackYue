#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("calc.in","r",stdin);
    freopen("calc.out","w",stdout);
    scanf("%d %d",&a,&b);
    c = a * b * (b + 1) / 2;
    printf("%d",c);
    return 0;
}