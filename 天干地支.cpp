#include <bits/stdc++.h>
using namespace std;
string tg = {"�����ɹ���ұ����켺"};
string dz = {"�����纥�ӳ���î������δ"};
int main()
{
  int year;
  freopen("1.in","r",stdin);
  freopen("1.out","w",stdout);
  cin >> year;
  cout << tg[year%10] << dz[year%12];
  return 0;
}

