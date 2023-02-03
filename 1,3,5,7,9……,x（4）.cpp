#include <bits/stdc++.h>
using namespace std;
int x,y,s;
int main()
{
  cin>>x>>y;
  if(y<x) swap(x,y);
  if(x%2!=0) x++;
  for(int i=x+1; i<y; i+=2)
    s+=i;
  cout<<s<<endl;
  return 0;
}

