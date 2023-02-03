#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g,h,i,j,sum=0,ji=1;
int main()
{
  scanf("%d %d %d",&a,&b,&c);
  if(a%2==0) sum+=a;
  else ji*=a;
  if(b%2==0) sum+=b;
  else ji*=b;
  if(c%2==0) sum+=c;
  else ji*=c;
  if(d%2==0) sum+=d;
  else ji*=d;
  if(e%2==0) sum+=e;
  else ji*=e;
  if(f%2==0) sum+=f;
  else ji*=f;
  if(g%2==0) sum+=g;
  else ji*=g;
  if(h%2==0) sum+=h;
  else ji*=h;
  if(i%2==0) sum+=i;
  else ji*=i;
  if(j%2==0) sum+=j;
  else ji*=a;
  if(a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2==0 && f%2==0 && h%2==0 && g%2==0 && i%2==0 && j%2==0)
    cout<<sum<<" 0";
  else cout<<sum<<" "<<ji;
  return 0;
}

