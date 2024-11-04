#include <stdio.h>
int main()
{
	int cnt = 0;
	const int n = 100;
	int notprime[n + 1] = { 0 };
	int prime[n+1] = { 0 };
	notprime[0] = notprime[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if(!notprime[i])
		{ 
			prime[cnt++] = i;
			printf("%d ", i);
		}		
		for (int j = 0; j <= cnt && j*i<=n; j++)
		{
			notprime[prime[j]*i] = 1;
			if (i % prime[j] == 0)
				break;
		}
	
	}
	printf("\n%d", cnt);
	return 0;
}