#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
  cin>>a;
  if(a%400==0 || (a%100!=0 && a%4==0))
    cout<<1<<endl;
  else cout<<0<<endl;
  return 0;
}

