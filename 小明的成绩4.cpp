#include <bits/stdc++.h>
using namespace std;
int a,b,c,x;
int main()
{
  cin>>a>>b>>c;
  int i=a>=85?1:0;
  int j=b>=85?1:0;
  int k=c>=85?1:0;
  x=i==1&&j==1&&k==1?1:0;
  cout<<x<<endl;
  x=0;
  if(i==1) x+=1;
  if(j==1) x+=1;
  if(k==1) x+=1;
  cout<<x<<endl;
  x=x>=2?1:0;
  cout<<x<<endl;
  return 0;
}
