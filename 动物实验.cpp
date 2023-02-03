#include <bits/stdc++.h>
using namespace std;
long long n,a,total;
double c,r,f;
string t;
int main()
{
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>a>>t;
    total+=a;
    if(t=="C") c+=a;
    else if(t=="R") r+=a;
    else f+=a;
  }
  cout<<"Total: "<<total<<" animals\n";
  cout<<"Total coneys: "<<c<<endl;
  cout<<"Total rats: "<<r<<endl;
  cout<<"Total frogs: "<<f<<endl;
  cout<<"Percentage of coneys: ";
  c/=(total*1.0);
  c*=100;
  printf("%.2lf %%\n",c);
  cout<<"Percentage of rats: ";
  r/=(total*1.0);
  r*=100;
  printf("%.2lf %%\n",r);
  cout<<"Percentage of frogs: ";
  f/=(total*1.0);
  f*=100;
  printf("%.2lf %%\n",f);
  return 0;
}

