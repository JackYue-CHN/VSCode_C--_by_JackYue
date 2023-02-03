#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int main()
{
    freopen("chain.in","r",stdin);
    freopen("chain.out","w",stdout);
    scanf("%d %d",&n,&m);
    int *p = new int[n + 1];
    for(int i = 1;i <= n;i++)
    	scanf("%d",&p[i]);
    sort(p + 1,p + 1 + n);
    for(int i = 1;i <= n;i++)
    {
    	m -= p[i];
    	++ans;
    	if(m <= 0)
    	{
    		printf("%d",ans);
    		break;
    	}
    }
    delete [] p;
    return 0;
}