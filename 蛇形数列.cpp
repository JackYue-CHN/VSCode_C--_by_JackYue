#include <bits/stdc++.h>
using namespace std;
long long n,f[10001][10001];
int main()
{
  cin >> n;
  int dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0},
                                 x = 1,y = 1,d = 0;
  for(int i = n * n; i >= 1; i --)
  {
    if((x + dx[d] > n || y + dy[d] > n ||
        y + dy[d] == 0) || (f[x + dx[d]][y + dy[d]]))
      d = (d + 1) % 4;
    f[x][y] = i;
    x += dx[d];
    y += dy[d];
  }
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= n; j ++)
      cout << setw(4) << f[i][j];
    cout << endl;
  }
  return 0;
}
