#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, t[N];
bool state[N];

void DFS(int u) { //深度优先搜索
    if (u == n + 1) {
		for(int i = 1;i <= n;i++){
			printf("%d ",t[i]);
		}
		printf("\n");
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if(!state[i]) {
			t[u] = i; 
			state[i] = true;
			DFS(u + 1);
			state[i] = false;
		}
    }
}

int main() {
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    scanf("%d", &n);
    DFS(1);
    return 0;
}
