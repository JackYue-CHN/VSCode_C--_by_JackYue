#include <bits/stdc++.h>
using namespace std;
int n,k,m,i,j;
vector <int> o,h,t,neww;
int main()
{
    scanf("%d %d %d",&n,&k,&m);
    for(i = 1;i <= n;i++)
        o.push_back(i);
    for(i = 1;i <= k;i++)
    {
        for(j = 1;j <= n / 2;j++)
        {
            int tmp = o.front();
            o.erase(o.begin());
            n.push_back(tmp);
        }
        for(j = 1;j <= n;j++)
        {
            if(j % 2)
            {
                int tmp = h.front();
                h.erase(h.begin());
                n.push_back(tmp);
            }
            else
            {
                int tmp = t.front();
                t.erase(t.begin());
                n.push_back(tmp);
            }
        }
    }
    cout << n[i];
    return 0;
}
