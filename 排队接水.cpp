#include <bits/stdc++.h>
using namespace std;
struct node
{
  int b,v;
} t[1001];
bool cmp(node x,node y)
{
  return x.v < y.v;
}
int main()
{
  long long n;
  double s;
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> t[i].v,t[i].b = i;
  }
  sort(t + 1,t + 1 + n,cmp);
  for(int i = 1; i <= n; i ++)
    s += t[i].v * (n - i);
  for(int i = 1; i <= n; i ++)
    cout << t[i].b << " ";
  cout << endl;
  printf("%.2lf",s * 1.0 / n);
  return 0;
}

