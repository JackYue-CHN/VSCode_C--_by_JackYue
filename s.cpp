#include <bits/stdc++.h>
using namespace std;
int n, r, a[1000010];
void dfs(int k) {
    if (k > r) {
        for (int i = 1; i <= r; i++) {
            printf("%3d", a[i]);
        }
        printf("\n");
        return;
    }
    for(int i = a[k - 1] + 1;i <= n;i++){
        a[k] = i;
        dfs(k + 1);
    }
}
int main() {
    cin >> n >> r;
    dfs(1);
    return 0;
}
