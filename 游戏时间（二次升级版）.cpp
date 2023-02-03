#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
  cin>>a>>b>>c>>d;
  d-=b;
  if(d<0)
  {
    c--;
    d+=60;
  }
  c-=a;
  if(c<=0) c+=24;
  cout<<"O JOGO DUROU "<<c<<" HORA(S) E "<<d<<" MINUTO(S)";
  return 0;
}

