#include <bits/stdc++.h>
using namespace std;
set <long long> a;
void print(set <long long> &T)
{
  set <long long> :: iterator it;
  for(it = T.begin(); it != T.end(); it ++)
    cout << *it << "\t";
  cout << endl;
}
int main()
{
  for(int i = 1000000; i > 0; i --)
    a.insert(i);
  a.insert(80);
  a.insert(65536);
  a.insert('s' + 'b');
  print(a);
  return 0;
}

