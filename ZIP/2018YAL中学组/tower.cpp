#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 200010;
int n;
int r[N], h[N];
int a[N];
bool cmp(int x, int y) {
    return h[x] < h[y];
}
int main() {
    freopen("tower.in", "r", stdin);
    freopen("tower.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++ )
        scanf("%d%d", &r[i], &h[i]);
    int res = 0;
    for (int i = 1; i <= n; i ++ ) {
        a[i] = 1; 
        for (int j = 1; j < i; j ++ )
            if (r[i] > r[j])
                a[i] = max(a[i], a[j] + 1);
        res = max(res, a[i]);
    }
    printf("%d\n", res);
    return 0;
}

