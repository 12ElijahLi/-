#include <stdio.h>
int main()
{
	const int n = 100;
	int	cnt=0;
	int notprime[n+1] = { 0 };
	notprime[0] = notprime[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (!notprime[i])
		{
			cnt++;
			printf("%d  ", i);
			for (int j = i * i; j <= n; j += i)
				notprime[j] = 1;
		}
		
	}
	printf("\nÒ»¹²%d", cnt);
	return 0;
}