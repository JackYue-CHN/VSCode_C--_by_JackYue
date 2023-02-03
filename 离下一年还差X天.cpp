#include <bits/stdc++.h>
using namespace std;
int year,month,day,s,monthday[13]=
{
  0,31,28,31,30,31,
  30,31,31,30,31,30,31
};
bool TFRN=0;
int main()
{
  cin>>year>>month>>day;
  for(int i=1; i<=month-1; ++i)
  {
    if(month==2)
    {
      if(year%400==0 || (year%4==0 && year%100!=0))
      {
        s+=29;
        TFRN=1;
      }
      else s+=28;
    }
    else s+=monthday[i];
  }
  s+=day;
  if(TFRN)
    cout<<366-s<<endl;
  else cout<<365-s<<endl;
  return 0;
}

