#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll of_s = 7960;
const ll s_s = 11200;
const ll t_s = 16700;
const ll ff_s = 115000;
const ll if_s = 2000000;
ll n;
int main()
{
    freopen("speed.in","r",stdin);
    freopen("speed.out","w",stdout);
    scanf("%lld",&n);
    printf("%lld ",n);
    if(n < of_s)
    {
    	printf("0");
    	return 0;
    }
    else
    {
    	printf("1");
    	if(n < s_s) return 0;
    	else
    	{
    		printf("2");
    		if(n < t_s) return 0;
    		else
    		{
    			printf("3");
    			if(n < ff_s) return 0;
    			else
    			{
    				printf("4");
    				if(n < if_s)
    					return 0;
    				else
    				{
    					printf("5");
    					return 0;
    				}
    			}
    		}
    	}
    }
}