#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],w,temp;
int s;
int buy(int a,int b);
int change(int a,int b,int c);
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i];
    sort(a + i,a + i + n);
  }
  cin >> w;
  w = buy((a[n]),w);
  for(int i = 1; i <= n; i ++)
  {
    w -= change(temp,(a[i]),s);
    if(w = 0) break;
  }
  cout << s;
  return 0;
}
int buy(int a,int b)
{
  if(b > a) return a;
  else return buy((a - 1),b);
}
int change(int a,int b,int c)
{
  if(a == b)
  {
    for(int i = 1; i <= n; i ++)
      if(change(a,(b - i),c) > i)
        return change(a,(b - i),c);
  }
  else if(a < b)
  {
    return 0,b,c;
  }
  else
  {
    c ++;
    return a,b,c;
  }
}
