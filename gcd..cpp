#include <bits/stdc++.h>
using namespace std;
long long l[11],r[11],x[11],t;
int gcd(int a,int b);
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  for(int i = 1; i <= t; i ++)
    cin >> l[i] >> r[i] >> x[i];
  for(int i = 1; i <= t; i ++)
    cout << gcd((l[i]) / (x[i]),(r[i]) / (x[i])) << endl;
  return 0;
}
int gcd(int a,int b)
{
  if(a < b) swap(a,b);
  if(a == b) return a;
  else if((a / 2) < b || (b / 2) < a) return 1;
  else
  {
    if((a / 2) == b) a *= 2;
    else if((b / 2) == a) b *= 2;
    return gcd((a / 2),(b / 2));
  }
}
