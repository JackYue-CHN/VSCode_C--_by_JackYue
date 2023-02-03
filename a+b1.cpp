#include <bits/stdc++.h>
using namespace std;
int a, b;
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

void write(int x) {
    if (x < 0) putchar('-'), x = -x;
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
}


int main() {
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    a = read();
    b = read();
    write(a + b);
    return 0;
}
