#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
long long n,k,a[10001],i = 1;
int main()
{
    cin >> n;
    cin >> k;
	for( ; i <= n; i ++ )
		cin >> a[i];
    sort( a + 1, a + 1 + n );
    for( i = 1; i <= k; i ++ )
        cout << a[i] << " ";
    return 0;
}
