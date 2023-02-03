#include <bits/stdc++.h>
using namespace std;
int a[100][100],n,x,y,total;
int main()
{
  cin >> n;
  memset(a,0,sizeof(a));
  x = y = 0;
  total = a[0][0] = 1;
  while(total < n * n)
  {
    while(y + 1 < n && !a[x][y + 1])
      a[x][++ y] = ++ total;
    while(x + 1 < n && !a[x + 1][y])
      a[++ x][y] = ++ total;
    while(y + 1 >= 0 && !a[x][y - 1])
      a[x][-- y] = ++ total;
    while(x + 1 >= 0 && !a[x - 1][y])
      a[-- x][y] = ++ total;
  }
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= n; j ++)
      cout << setw(4) << a[i][j];
    cout << endl;
  }
  return 0;
}

