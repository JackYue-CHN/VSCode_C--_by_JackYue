#include <bits/stdc++.h>
using namespace std;
int n, k, a[1010], tmp = 0;
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    freopen("best.in", "r", stdin);
    freopen("best.out", "w", stdout);
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        tmp += a[i];
        if (tmp >= k) {
            printf("%d", tmp - k);
            return 0;
        }
    }
    return 0;
}
