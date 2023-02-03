#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll gcd(ll n)
{
	ll res = n;
	for(ll i = 2;i * i <= n;i++)
	{
		if(n % i == 0)
		{
			res = res / i * (i - 1);
			while(n % i == 0)
				n /= i;
		}
	}
	if(n > 1) res = res / n * (n - 1);
	res *= 2;
	return res;
}
int main()
{
    freopen("factor.in","r",stdin);
    freopen("factor.out","w",stdout);
    scanf("%lld",&n);
    printf("%lld",gcd(n));
    return 0;
}