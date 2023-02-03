#include <bits/stdc++.h>
using namespace std;
int md[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31},year,month,day;
int main()
{
	freopen("tomorrow.in","r",stdin);
	freopen("tomorrow.out","w",stdout);
	scanf("%04d%02d%02d",&year,&month,&day);
	if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		md[2]++;
	day++;
	if(day > md[month])
	{
		month++;
		day = 1;
	}
	if(month > 12)
	{
		year++;
		month = 1;
	}
	printf("%04d%02d%02d",year,month,day);
	return 0;
}
