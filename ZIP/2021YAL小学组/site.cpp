#include <bits/stdc++.h>
using namespace std;
int n, a[100010], tmp = 0, res = 0;
inline int read() {
    char c = getchar();
    int x = 0, s = 1;
    while (c < '0' || c > '9') {
        if (c == '-') s = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * s;
}

int main() {
    freopen("site.in", "r", stdin);
    freopen("site.out", "w", stdout);
    n = read();
    for (int i = 0; i < n; i++) {
        a[i] = read();
    }
    sort(a, a + n);
    if (n % 2) tmp = a[n / 2];
    else tmp = (a[n / 2] + a[n / 2 + 1]) / 2;
    for (int i = 0; i < n; i++) {
        res += abs(a[i] - tmp);
    }
    printf("%d",res);
    return 0;
}
