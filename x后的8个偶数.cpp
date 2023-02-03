#include <bits/stdc++.h>
using namespace std;
int x,a;
int main()
{
  cin>>x;
  if(x%2==1)
  {
    x++;
    a=7;
    cout<<x<<endl;
  }
  else a=8;
  for(int i=x; i<=(x+(a*2)); i+=2)
    cout<<i<<endl;
  return 0;
}

