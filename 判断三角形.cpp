#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,c;
int main()
{
  /*�ж�������*/
  scanf("%lld %lld %lld",&a,&b,&c);
  if ((a+b>c) && (a+c>b) && (b+c>a)) cout<<"yes\n";
  else cout<<"no\n";
  return 0;
}

