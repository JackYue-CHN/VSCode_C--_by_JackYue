#include <bits/stdc++.h>
using namespace std;
int a,b,x;
int main()
{
  cin>>a>>b;
  cout<<"O JOGO DUROU ";
  if(a==b) cout<<24<<" HORA(S)";
  else
  {
    x=b-a;
    if(x<=0) x+=24;
    cout<<x<<" HORA(S)";
  }
  return 0;
}

