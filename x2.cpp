#include <bits/stdc++.h>
using namespace std;
int x,y,s,minn,maxn;
int main()
{
  cin>>x>>y;
  minn=min(x,y);
  maxn=max(x,y);
  for(int i=minn+1; i<maxn; ++i)
    if(i%2!=0) s+=i;
  cout<<s<<endl;
  return 0;
}

