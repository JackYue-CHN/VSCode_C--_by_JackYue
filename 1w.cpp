#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long u;
queue <u> st;
u n, ans;
int main() {
    freopen("collatz.in","r",stdin);
    freopen("collatz.out","w",stdout);
	cin >> n;
    ans = n;
    for (u i = 0; n != 1; i++) {
        if (n % 2) n *= 3, n++;
        else n /= 2;
        st.push(n);
    }
    cout << ans << "->";
    for (u i = 0;; i++) {
        if (st.front() != 1) cout << "->" << st.front();
        else {
            printf("1");
            return 0;
        }
        st.pop();
    }
}
