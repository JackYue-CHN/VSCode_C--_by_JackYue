#include <bits/stdc++.h>
using namespace std;
int n, a[1010], ans = 0;
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

inline void write(int x) {
    if (x < 0) putchar('-'), x = -x;
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

int main() {
    freopen("over.in", "r", stdin);
    freopen("over.out", "w", stdout);
    n = read();
    for (int i = 0; i < n; i++) {
        a[i] = read();
    }
    for (int i = 0; i < n; i++) {
		for(int j = i;j < n;j++){
			if(a[i] > a[j]) ans++;
		}
    }
	write(ans);
    return 0;
}
