#include <bits/stdc++.h>
#define INF 10000000000000.0
using namespace std;
double a,b,c,maxn=-INF;
int main()
{
  cin>>a>>b>>c;
  maxn=max({a,b,c});
  if(c==maxn) swap(a,c);
  else if(b==maxn) swap(a,b);
  if(a>=(b+c))
    cout<<"NAO FORMA TRIANGULO\n";
  else
  {
    if((a*a)==(b*b+c*c))
      cout<<"TRIANGULO RETANGULO\n";
    else if((a*a)>(b*b+c*c))
      cout<<"TRIANGULO ORTUSANGULO\n";
    else if((a*a)<(b*b+c*c))
      cout<<"TRIANGULO ACUTANGULO\n";
    if(a==b==c)
      cout<<"TRIANGULO EQUILATERO\n";
    else if(a==b!=c || a==c!=b || b==c!=a)
      cout<<"TRIANGULO ISOSCELES\n";
  }
  return 0;
}

