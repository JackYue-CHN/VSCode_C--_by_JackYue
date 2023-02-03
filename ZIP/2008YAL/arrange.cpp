#include <bits/stdc++.h>
#define n 10
using namespace std;
int N, t[n], ans, a[n][n];
bool state[n];

void DFS(int u) { //深度优先搜索
    if (u == N + 1) {
        ans++;
        for (int i = 1; i <= N; i++) {
            a[u][i] = t[i];
        }
        return ;
    }
    for (int i = 1; i <= N; i++) {
        if (!state[i]) {
            t[u] = i;
            state[i] = true;
            DFS(u + 1);
            state[i] = false;
        }
    }
}

int main() {
    freopen("arrange.in", "r", stdin);
    freopen("arrange.out", "w", stdout);
    scanf("%d", &N);
    DFS(1);
    printf("%d\n",ans);
    for(int i = 1;i <= N;i++){
        for(int j = 1;j <= N;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
