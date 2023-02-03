#include <bits/stdc++.h>
using namespace std;
struct JINBI
{
  int m,v;
} a[110],temp[110];
bool cmp(JINBI x,JINBI y)
{
  return x.v * y.m > x.m * y.v;
}
int n,t;
double s;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> t;
  for(int i = 1; i <= n; i ++)
    cin >> a[i].m >> a[i].v;
  sort(a + 1,a + n + 1,cmp);
  for(int i = 1; i <= n; i ++)
  {
    if(a[i].m > t)
    {
      s += a[i].v * t * 1.0 / (a[i].m * 1.0);
      break;
    }
    else s += a[i].v,t -= a[i].m;
  }
  printf("%.2lf",s);
  return 0;
}

