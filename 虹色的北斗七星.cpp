#include <bits/stdc++.h>
using namespace std;
long long n,a[100001],s[100001];
int l=1,r=1;
int maxn(int a,int b);
int minn(int a,int b);
int main()
{
  scanf("%lld",&n);
  for(int i=1; i<=n; i++)
    scanf("%lld",&a[i]);
  for(int i=1; i<=n; i++)
  {
    s[i]=maxn(a[l],a[r])-minn(a[l],a[r])-l+r-1;
    sort(s+i,s+(i-1));
    l++;
    r++;
  }
  cout<<s[n];
  return 0;
}
int maxn(int a,int b)
{
  if(a==b) return a;
  else return maxn(a+1,b-1);
}
int minn(int a,int b)
{
  if(a==b) return a;
  else return minn(a+1,b-1);
}
