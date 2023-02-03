#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,h,m;
int main()
{
  cin>>a>>b>>c>>d;
  e=a*60+b;
  f=c*60+d;
  m=f-e;
  do
  {
    m-=60;
    h++;
  }
  while(m>=60);
  printf("%02d %02d\n",h,m);
  return 0;
}

