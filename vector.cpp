#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int n[101] = {0};
int main()
{
  for(int i = 1; i < 10; i ++)
    a.push_back(i);
  for(int i = 0; i < a.size(); i ++)
    cout << a[i] << "\t";
  cout << "\n";
  a.insert(a.begin() + 2,100);
  for(int i = 0; i < a.size(); i ++)
    cout << a[i] << "\t";
  cout << "\n";
  vector <int> olda(a);
  a.insert(a.begin() + 5,n,n + 3);
  for(int i = 0; i < a.size(); i ++)
    cout << a[i] << "\t";
  cout << endl;
  a.swap(olda);
  for(int i = 0; i < a.size(); i ++)
    cout << a[i] << "\t";
  cout << endl;
  a.erase(a.begin() + 2,a.end() - 2);
  for(int i = 0; i < a.size(); i ++)
    cout << a[i] << "\t";
  cout << "\n";
  vector <int> :: iterator it;
  for(it = a.begin(); it != a.end(); it ++)
    cout << *it << "\t";
  cout << endl;
  return 0;
}

