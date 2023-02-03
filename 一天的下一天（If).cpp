#include <bits/stdc++.h>
using namespace std;
long long y,m,d;
int main()
{
  cin>>y>>m>>d;
  d++;
  if(m==4 || m==6 || m==9 || m==11)
  {
    if(d>30)
    {
      m++;
      d=1;
    }
  }
  else if(m==2)
  {
    if(y%400==0 || (y%4==0 && y%100!=0))
    {
      if(d>29)
      {
        m++;
        d=1;
      }
    }
    else
    {
      if(d>28)
      {
        m++;
        d=1;
      }
    }
  }
  else
  {
    if(d>31)
    {
      m++;
      d=1;
    }
  }
  if(m>12)
  {
    y++;
    m%=12;
    d%=31;
  }
  printf("%lld/%02lld/%02lld",y,m,d);
  return 0;
}

