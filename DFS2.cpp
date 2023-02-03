#include <bits/stdc++.h>
using namespace std;
int n, r, ans[10000000], cnt = 0;
void dfs(int u) {
    if (u == n) {
        if (cnt != r)
            return;
        for (int i = 0; i < r; i++) {
            printf("%3d", ans[i]);
        }
        printf("\n");
        return;
    }
    ans[cnt] = u + 1;
    cnt++;
    dfs(u + 1);
    cnt--;
    dfs(u + 1);
}
int main() {
    cin >> n >> r;
    dfs(0);
    return 0;
}
