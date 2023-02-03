#include <bits/stdc++.h>
using namespace std;
long double a,b,c;
int main()
{
  cin>>a>>b>>c;
  if(a+b>c && a+c>b && b+c>a)
  {
    double p=(a+b+c)/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",s);
  }
  else cout<<"²»ÄÜ"<<endl;
  return 0;
}

