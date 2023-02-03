#include <bits/stdc++.h>
using namespace std;
long double PI, b = 0;
int i = 1;
int main()
{
    for (; i <= 1e9; i += 2)
    {
        b = 1.0 / i * 1.0;
        PI += b;

        if ((i + 1) % 4 == 0)
            PI -= 2 * b;
    }

    PI *= 4;
    printf("%.9Lf", PI);
    return 0;
}
