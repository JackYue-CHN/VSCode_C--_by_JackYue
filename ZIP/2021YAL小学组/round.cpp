#include <bits/stdc++.h>
using namespace std;
long long N, tmp;
inline long long read() {
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

inline void write(long long x) {
    if (x < 0) putchar('-'), x = -x;
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

int main() {
    freopen("round.in", "r", stdin);
    freopen("round.out", "w", stdout);
    N = read();
    tmp = N % 10;
    if (tmp > 4) N += 10 - tmp;
    else N -= tmp;
    write(N);
    return 0;
}
