#include <bits/stdc++.h>
using namespace std;
struct noipstudent
{
  string name;
  int id;
  double score;
} a[5];
int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i ++)
  {
    cin >> a[i].name >> a[i].id >> a[i].score;
    a[i].id ++;
    a[i].score *= 1.2;
    ceil(a[i].score);
    if(a[i].score > 600) a[i].score = 600;
  }
  for(int i = 0; i < n; i ++)
    cout << a[i].name << " " << a[i].id << " " << a[i].score << endl;
  return 0;
}

