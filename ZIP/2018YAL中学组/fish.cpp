#include <bits/stdc++.h>
using namespace std;
int w[100005], C[100005], T;
char t[100005];
int main() {
    freopen("fish.in","r",stdin);
	freopen("fish.out","w",stdout);
	scanf("%d", &T);
    for (int i = 1; i <= T; i++)
        scanf("%d %c", &w[i], &t[i]);
    int m = T,flag = -1;
    for (int i = 1; i <= T; i++) {
        if (t[i] == 'R')
            C[++flag] = w[i];
        else {
            while (flag != -1) {
                m--;
                if (C[flag] < w[i]) flag--;
                else break;
            }
        }
    }
    printf("%d\n", m);
    return 0;
}
