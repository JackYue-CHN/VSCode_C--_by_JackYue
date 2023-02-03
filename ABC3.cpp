#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
  cin>>a>>b>>c;
  for(int i=1; i<=3; i++)
  {
    if(a>b) swap(a,b);
    else if(a>c) swap(a,c);
    else if(b>c) swap(b,c);
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
  return 0;
}

