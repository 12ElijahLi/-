#include <stdio.h>
int main()
{
	int n,isp=0;
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (j == i)isp++;
			else if (i % j == 0) break;
		}
		
	}
	printf("%d", isp);
	return 0;
}