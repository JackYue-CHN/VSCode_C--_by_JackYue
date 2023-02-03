#include <bits/stdc++.h>
using namespace std;
int a[10],h,n;
int main()
{
  for(int i=1; i<=10; i++) cin>>a[i];
  cin>>h;
  h+=30;
  for(int i=1; i<=10; i++) if(a[i]<h) n++;
  cout<<n;
  return 0;
}

