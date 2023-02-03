#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int main()
{
  cin>>a>>b>>c>>d;
  if(b>d)
  {
    d+=60;
    c--;
  }
  f=d-b;
  e=c-a;
  printf("%02d %02d\n",e,f);
  return 0;
}

