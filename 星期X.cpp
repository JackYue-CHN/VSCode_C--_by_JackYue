#include <bits/stdc++.h>
using namespace std;
string n[8] = {"input error!","Monday","Tuesday",
               "Wednesday","Thursday","Friday","Saturday","Sunday"
              };
int i;
int main()
{
  cin>>i;
  if(i<=0 || i>7) i=0;
  cout<<n[i]<<endl;
  return 0;
}

