#include <bits/stdc++.h>
using namespace std;
struct student
{
  int id,c,m,e,s;
} stu[310];
bool cmp(student a,student b)
{
  if(a.s > b.s) return 1;
  else if(a.s < b.s) return 0;
  else
  {
    if(a.c > b.c) return 1;
    else if(a.c < b.c) return 0;
    else
    {
      if(a.id > b.id) return 0;
      else return 1;
    }
  }
}
int main()
{
  int n;
  ios :: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> stu[i].c >> stu[i].m >> stu[i].e;
    stu[i].id = i;
    stu[i].s = stu[i].c + stu[i].m + stu[i].e;
  }
  sort(stu + 1,stu + 1 + n,cmp);
  for(int i = 1; i <= 5; i ++)
    cout << stu[i].id << " " << stu[i].s << endl;
  return 0;
}

