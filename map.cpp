#include <bits/stdc++.h>
using namespace std;
map <string,int> scount;
string s;
void print(map <string,int> &T)
{
  for(map <string,int> ::iterator it = T.begin();
      it != T.end(); it ++)
    cout << (*it).first << "\t" << (*it).second
         << "\n";
}
int main()
{
  int n;
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> s;
    scount[s] ++;
  }
  print(scount);
  scount.insert(make_pair("rw",2));
  cout << "\n";
  print(scount);
  return 0;
}

