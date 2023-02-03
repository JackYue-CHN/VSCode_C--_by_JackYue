#include <bits/stdc++.h>
using namespace std;
int year,month,day,s,monthday[13]=
{
  0,31,28,31,30,31,
  30,31,31,30,31,30,31
};
int main()
{
  cin>>year>>month>>day;
  for(int i=1; i<=month-1; ++i)
  {
    if(month==2)
    {
      if(year%400==0 || (year%4==0 && year%100!=0))
        s+=29;
      else s+=28;
    }
    else s+=monthday[i];
  }
  s+=day;
  cout<<s<<endl;
  return 0;
}

