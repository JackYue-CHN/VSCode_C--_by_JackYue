#include <bits/stdc++.h>
using namespace std;
int fbi[1000];
int f(int n)
{
  if(fbi[n] != 0) return fbi[n];
  if(n <= 2) fbi[n] = 1;
  else fbi[n] = (f(n - 1) + f(n - 2)) % 2022;
  return fbi[n];
}
int main()
{
  int n;
  cin >> n;
  cout << f(n);
  return 0;
}

