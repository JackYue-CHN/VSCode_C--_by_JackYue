#include <bits/stdc++.h>
using namespace std;
int a,b,c,x,y,z;
int main()
{
  cin>>a>>b>>c;
  x=min({a,b,c});
  y=max({a,b,c});
  z=a+b+c-x-y;
  cout<<x<<" "<<z<<" "<<y<<endl;
  return 0;
}

