#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
  cin>>a>>b>>c>>d;
  b+=a*60;
  d+=c*60;
  cout<<"O JOGO DUROU ";
  if(b==d) cout<<24<<" HORA(S) E "<<0;
  if(b<d) cout<<(d-b)/60<<" HORA(S) E "<<(d-b)%60;
  if(b>d) cout<<(24*60+d-b)/60<<" HORA(S) E "<<(24*60+d-b)%60;
  cout<<" MINUTO(S)";
  return 0;
}

