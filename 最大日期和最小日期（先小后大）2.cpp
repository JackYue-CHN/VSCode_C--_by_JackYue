#include <bits/stdc++.h>
using namespace std;
struct date
{
  int y,m,d;
} da[101];
int main()
{
  int n;
  cin>>n;
  cin>>da[1].y>>da[1].m>>da[1].d;
  int maxn=1;
  int minn=1;
  for(int i=1; i<n; i++)
  {
    cin>>da[i].y>>da[i].m>>da[i].d;
    if(da[i].y>da[maxn].y or da[i].m>da[maxn].m or da[i].d>da[maxn].d)
      maxn=i;
    else if(da[i].y<da[minn].y or da[i].m<da[minn].m or da[i].d<da[minn].d)
      minn=i;
  }
  cout<<da[maxn].y<<" "<<da[maxn].m<<" "<<da[maxn].d<<endl;
  cout<<da[minn].y<<" "<<da[minn].m<<" "<<da[minn].d;
  return 0;
}

