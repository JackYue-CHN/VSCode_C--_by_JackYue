#include <bits/stdc++.h>
using namespace std;
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
const int N = 1e7 + 100;
const int M = 1e5 + 100;
long long ans;
int n;
int a[N], cnt[M];
queue<long long> q1, q2;
inline long long get_first() {
    if (q2.empty() || (!q1.empty() && q1.front() < q2.front())) {
        long long x = q1.front();
        q1.pop();
        return x;
    } else {
        long long x = q2.front();
        q2.pop();
        return x;
    }
}
int main() {
    memset(cnt, 0, sizeof(cnt));
    n = read();
    ans = 0;
    for (int i = 1; i <= n; i++)
        cnt[a[i] = read()]++;
    for (int i = 1; i <= 100000; i++)
        for (int j = 1; j <= cnt[i]; j++)
            q1.push(i);
    for (register int i = 1; i < n; i++) {
        long long x = get_first();
        long long y = get_first();
        ans += x + y;
        q2.push(x + y);
    }
    printf("%lld", ans);
    return 0;
}
