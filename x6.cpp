#include <bits/stdc++.h>
using namespace std;
double x[6];
int y=0;
int main()
{
  for(int i=1; i<=6; i++)
  {
    cin>>x[i];
    if(x[i]>0) y++;
  }
  cout<<y<<" positive numbers";
  return 0;
}

