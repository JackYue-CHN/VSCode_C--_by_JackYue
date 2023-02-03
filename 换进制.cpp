#include <bits/stdc++.h>
using namespace std;
int x,m;
string str = {"0123456789ABCDEF"};
void turn(int a,int b)
{
  if(a!=0)
  {
    turn(a/b,b);
    cout<<str[a%b];
  }
}
int main()
{
  cin>>x>>m;
  turn(x,m);
  return 0;
}

