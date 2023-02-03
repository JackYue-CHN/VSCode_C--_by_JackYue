#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
int n,q[N],s[N],result; 
int main()
{
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&q[i]);
	}
	for(int i = 0,j = 0;i < n;i++)
	{
		s[q[i]]++;
		while(j < i && s[q[i]] > 1)
		{
			s[q[j++]]--;
		}
		result = max(result,i - j + 1);
	}
	printf("%d",result);
	return 0;
}
