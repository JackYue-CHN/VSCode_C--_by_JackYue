#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
string a, b;
int x[N + 1], y[N + 1], z[N + 1];
bool flag = 1;
int main()
{
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    getline(cin, a);
    getline(cin, b);
    for(int i = int(a.size()), j = N; i >= 0; i--, j--)
        x[j] = a[i] - 48;
    for(int i = int(b.size()), j = N; i >= 0; i--, j--)
        y[j] = b[i] - 48;
    for(int i = N; i >= 0; i--) z[i] = x[i] + y[i];
    for(int i = N; i >= 0; i--)
    {
        while(z[i] >= 10)
        {
            z[i] -= 10;
            z[i - 1]++;
        }
    }
    for(int i = 0; i < N; i++)
    {
        if(z[i] == 0 && z[i + 1] == 0 && flag) continue;
        else
        {
            if(flag)
            {
                flag = 0;
                continue;
            }
            printf("%d", z[i]);
        }
    }
    return 0;
}
