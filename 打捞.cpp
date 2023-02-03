#include <bits/stdc++.h>
#define N 998244353
using namespace std;
int n;
long long k,l[10001],a[10001][10001],
     b[10001][10001],temp[10001][10001],s;
long long g(long long i)
{
  for(int i = 1; i <= k; i ++)
  {
    s += b[i][0];
  }
  s *= b[2][0];
  return s;
}
int main()
{
  scanf("%d %lld",n,k);
  for(int i = 1; i <= n; i ++)
  {
    scanf("%lld",l[i]);
    temp[i][0] = k / l[i];
    for(int j = 1; j <= n; j ++)
      scanf("%lld",a[j][0]);
    for(int j = 1; j <= temp[i][0]; j ++)
      b[j][0] = a[j][0];
  }
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= n; j ++)
      temp[i][n] = g(i) % N;
  }
  sort(temp + 1 + n,temp + n + n);
  cout << temp[n][n];
  return 0;
}
