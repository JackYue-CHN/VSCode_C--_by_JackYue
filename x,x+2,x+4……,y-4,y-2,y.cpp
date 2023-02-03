#include <bits/stdc++.h>
using namespace std;
int n,x,y,s;
int main()
{
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>x>>y;
    if(x%2!=0) s+=x;
    if(y%2==0) s+=y;
    cout<<s<<endl;
  }
  return 0;
}

