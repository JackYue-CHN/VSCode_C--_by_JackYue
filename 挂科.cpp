#include <bits/stdc++.h>
using namespace std;
int n,x,y;
int main()
{
  /*¹Ò¿Æ*/
  cin>>n>>x>>y;
  int minn=min(x,y);
  cout<<minn<<" ";
  int maxn=x+y-n;
  cout<<max(maxn,0)<<endl;
  return 0;
}
