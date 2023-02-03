#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
  cin>>a;
  cout<<"Today, I ate ";
  if(a<=0) cout<<"0 apple.";
  else if(a==1) cout<<"1 apple.";
  else cout<<a<<" apples.";
  return 0;
}

