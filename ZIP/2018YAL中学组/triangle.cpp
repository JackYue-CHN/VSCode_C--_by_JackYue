#include <bits/stdc++.h>
using namespace std;
int n, a[200010], res = 0;
inline int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    freopen("triangle.in", "r", stdin);
    freopen("triangle.out", "w", stdout);
    int ans = 0;
    int n, a[200011];
    scanf("%d", &n);
    for (int m = 0; m < n; m++)
        scanf("%d", &a[m]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++) {
                int l = a[i] + a[j] + a[k];
                int m = max(a[i], max(a[j], a[k]));
                int r = l - m;
                if (m < r) {
                    ans = max(ans, l);
                }
            }
    printf("%d", ans);
    return 0;
}
