#include <bits/stdc++.h>
using namespace std;
long long akm(int n,int m)
{
  if(m==0) return n+1;
  else if(m>0 and n==0) return akm(1,m-1);
  else return akm(akm(n-1,m),m-1);
}
signed main()
{
  long long m,n;
  cin>>m>>n;
  printf("%lld",akm(m,n));
  return 0;
}

