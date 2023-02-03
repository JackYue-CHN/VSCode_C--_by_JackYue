#include <bits/stdc++.h>
using namespace std;
int s,v,hh=0,mm=0;
int main()
{
  scanf("%d %d",&s,&v);
  int t=ceil(s*1.0/v)+10;
  int x=480-t;
  if(x<0) x+=1440;
  hh=x/60;
  mm=x%60;
  printf("%02d:%02d",hh,mm);
  return 0;
}

