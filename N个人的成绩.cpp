#include <bits/stdc++.h>
using namespace std;
struct student
{
  string name;
  int id,ch,ma,en;
} stu[1001];
int main()
{
  int n,t,maxn=-1;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>stu[i].name>>stu[i].ch>>stu[i].ma>>stu[i].en;
    if((stu[i].ch+stu[i].ma+stu[i].en)>maxn)
    {
      maxn=stu[i].ch+stu[i].ma+stu[i].en;
      t=i;
    }
  }
  cout<<stu[t].name<<" "<<stu[t].ch<<" "<<stu[t].ma<<" "<<stu[t].en;
  return 0;
}
