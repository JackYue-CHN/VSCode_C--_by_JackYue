#include <bits/stdc++.h>
using namespace std;
struct date
{
  string name;
  int y,m,d;
} r[110];
bool cmp(date a,date b)
{
  if(a.y > b.y) return 0;
  else if(a.y < b.y) return 1;
  else
  {
    if(a.m > b.m) return 0;
    else if(a.m < b.m) return 1;
    else
    {
      if(a.d > b.d) return 0;
      else return 1;
    }
  }
}
int main()
{
  int n;
  cin >> n;
  cin >> r[1].name >> r[1].y >> r[1].m >> r[1].d;
  for(int i = 2; i <= n; i ++)
  {
    cin >> r[i].name >> r[i].y >> r[i].m >> r[i].d;
  }
  sort(r + 1,r + 1 + n,cmp);
  for(int i = 1; i <= n; i ++)
    cout << r[i].name << endl;
  return 0;
}

