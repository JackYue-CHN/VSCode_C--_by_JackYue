#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,n,d;
  cin>>n;
  d=n;
  do
  {
    a=d/100;
    b=d/10%10;
    c=d%10;
    d=a+b+c;
  }
  while(d>=10);
  cout<<d<<endl;
}
