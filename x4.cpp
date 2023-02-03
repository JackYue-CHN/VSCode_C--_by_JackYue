#include <bits/stdc++.h>
using namespace std;
int x;
int main()
{
  cin>>x;
  if(x%2==1) cout<<x<<endl;
  for(int i=1; i<=6*2; i++)
  {
    x++;
    if(x%2==1) cout<<x<<endl;
  }
  return 0;
}

