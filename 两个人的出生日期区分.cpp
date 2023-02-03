#include <bits/stdc++.h>
using namespace std;
struct date
{
  string name;
  int y,m,d;
};
int main()
{
  date p1,p2;
  cin>>p1.name>>p1.y>>p1.m>>p1.d;
  cin>>p2.name>>p2.y>>p2.m>>p2.d;
  if(p1.y<p2.y) cout<<p1.name;
  else
  {
    if(p2.y<p1.y) cout<<p2.name;
    else
    {
      if(p1.m<p2.m) cout<<p1.name;
      else
      {
        if(p2.m<p1.m) cout<<p2.name;
        else
        {
          if(p1.d<p2.d) cout<<p1.name;
          else
          {
            if(p2.d<p1.d) cout<<p2.name;
            else
            {
              cout<<p1.name<<" ";
              cout<<p2.name;
            }
          }
        }
      }
    }
  }
  return 0;
}

