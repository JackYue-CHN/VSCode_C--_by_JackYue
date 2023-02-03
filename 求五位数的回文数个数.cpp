#include <bits/stdc++.h>
using namespace std;
int a[5],b[5]= {1,0,0,0,0},ans;
int main()
{
  while(b[0] <= 9)
  {
    for(int i = 0; i <= 4; i++)
      a[i] = b[i];
    while(b[1] <= 9)
    {
      while(b[2] <= 9)
      {
        while(b[3] <= 9)
        {
          while(b[4] <= 9)
          {
            if(b[1] == b[5] && b[2] == b[4])
              ans++;
            b[4]++;
          }
          b[4] = 0;
          b[3]++;
        }
        b[3] = 0;
        b[2]++;
      }
      b[2] = 0;
      b[1]++;
    }
    b[1] = 0;
    b[0]++;
  }
  cout << ans << endl;
  return 0;
}

