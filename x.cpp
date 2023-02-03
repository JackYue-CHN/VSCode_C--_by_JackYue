#include <bits/stdc++.h>
using namespace std;
int x;
double y;
int main()
{
  for(int i=1; i<=6; i++)
  {
    cin>>y;
    if(y>0) x+=1;
  }
  cout<<x<<" positive numbers";
  return 0;
}

