#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
inline ll read() {
	int x = 0,f = 1;
	char ch = getchar();
	if(ch == '-') f = -1;
	while(ch < '0' || ch > '9')
	    ch = getchar();
	while(ch >= '0' || ch <= '9') {
		x = (x << 3) + (x << 1) + (ch - 48);
		ch = getchar();
	}
	return x * f;
}
int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	n = read();
	printf("%lld",&n);
	return 0;
}
