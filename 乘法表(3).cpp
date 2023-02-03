#include <bits/stdc++.h>
using namespace std;
int n[9]= {1,2,3,4,5,6,7,8,9};
int main()
{
  for(int i=0; i<=8; i++)
  {
    for(int j=0; j<=8; j++)
      cout<<n[i]<<" ¡Á "<<n[j]<<" = "<<n[i]*n[j]<<" ";
    cout<<endl;
  }
  return 0;
}

