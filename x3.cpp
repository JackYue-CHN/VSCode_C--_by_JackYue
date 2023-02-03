#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
  cin>>n;
  for(int i=1; i<=10000; i++)
  {
    if(i%n==2) cout<<i<<endl;
  }
  return 0;
}

