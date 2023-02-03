#include <bits/stdc++.h>
using namespace std;
struct date
{
  int y,m,d;
} d[101];
int maxy,maxm,maxd,miny=13,minm=13,mind=13;
int main()
{
  int n;
  cin>>n;
  cin>>d[1].y>>d[1].m>>d[1].d;
  maxy=miny=d[1].y;
  maxm=minm=d[1].m;
  maxd=mind=d[1].d;
  for(int i=2; i<=n; i++)
  {
    cin>>d[i].y>>d[i].m>>d[i].d;
    if(d[i].y>maxy) maxy=d[i].y;
    else if(d[i].y<miny) miny=d[i].y;
    if(d[i].m>maxm) maxm=d[i].m;
    else if(d[i].m<minm) minm=d[i].m;
    if(d[i].m>maxd) maxd=d[i].d;
    else if(d[i].m<mind) mind=d[i].d;
  }
  cout<<miny<<" "<<minm<<" "<<mind<<endl;
  cout<<maxy<<" "<<maxm<<" "<<maxd<<endl;
  return 0;
}

