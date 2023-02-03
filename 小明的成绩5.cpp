#include <bits/stdc++.h>
using namespace std;
int a,t,x;
int main()
{
  for(int i=1; i<=10; ++i)
  {
    cin>>a;
    t=a>=85?t+1:t;
  }
  if(t<10) x=0;
  else x=1;
  cout<<x<<endl;
  cout<<"сп"<<t<<"цесепЦ"<<endl;
  x=t>=9?1:0;
  cout<<x<<endl;
  return 0;
}

