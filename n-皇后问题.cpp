#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int n;
char g[N][N];
bool col[N], dg[N], udg[N];

void DFS(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) puts(g[i]);
        puts("");
        return ;
    }
    for (int i = 0; i < n; i++) {
        if (!col[i] && !dg[u + i] && !udg[n - u + i]) {
            g[u][i] = 'Q';
            col[i] = dg[u + i] = udg[n - u + i] = true;
            DFS(u + 1);
            col[i] = dg[u + i] = udg[n - u + i] = false;
			g[u][i] = '.';
        }
    }
}

int main() {
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n; i++) {
            g[i][j] = '.';
        }
    }
	DFS(0);
    return 0;
}
