#include <bits/stdc++.h>
using namespace std;
int a,n;
long long s;
int main()
{
  cin>>a>>n;
  while(n<0) cin>>n;
  for(int i=1; i<=n; i++)
  {
    a++;
    s+=a;
  }
  cout<<s<<endl;
  return 0;
}

