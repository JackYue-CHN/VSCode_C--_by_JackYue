#include <bits/stdc++.h>
using namespace std;
int n,x,t=0,y=0;
int main()
{
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>x;
    if(x>=10 && x<=20) t++;
    else y++;
  }
  cout<<t<<" in\n"<<y<<" out\n";
  return 0;
}

