#include <bits/stdc++.h>
using namespace std;
string tg = {"¸ıĞÁÈÉ¹ï¼×ÒÒ±û¶¡Îì¼º"};
string dz = {"ÉêÓÏĞçº¥×Ó³óÒúÃ®³½ËÈÎçÎ´"};
int main()
{
  int year;
  freopen("1.in","r",stdin);
  freopen("1.out","w",stdout);
  cin >> year;
  cout << tg[year%10] << dz[year%12];
  return 0;
}

