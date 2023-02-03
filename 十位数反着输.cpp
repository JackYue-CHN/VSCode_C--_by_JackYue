#include <bits/stdc++.h>
using namespace std;
unsigned long long n,a[10];
int main()
{
  cin>>n;
  for(int i=0; i<=9; i++)
  {
    if(i==0) a[i]=n/1000000000;
    else if(i>=1 && i<=8) a[i]=n/(10^(i+8))%10^i;
    else a[i]=n%1000000000;
  }
  for(int i=1; i<=10; i++) printf("%010lld",a[i]);
  return 0;
}

