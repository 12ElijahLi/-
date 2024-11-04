#include <stdio.h>
#define Max 100
int oula(int* min_p, int n,int ans);
int* shai(int n)
{
	int cnt = 0;
	int notprime[Max + 1] = { 0 };
	int prime[Max + 1] = { 0 };
	int fx[Max + 1] = { 0 };
	int jieguo[Max + 1] = { 0 };
	for (int i = 2; i <= n; i++)
	{
		if (!notprime[i])
			prime[cnt++] = i;
		for (int j = 0; j <= cnt && prime[j] * i <= n; j++)
		{
			notprime[prime[j] * i] = 1;
			fx[prime[j] * i] = prime[j];
			if (i % prime[j] == 0)
				break;
		}
	}
	
	for (int i = 2; i <= n; i++)
	{
		if (fx[i] == 0)
			fx[i] = i;
		jieguo[i] = oula(fx, i,1);
	}
	return jieguo;
}
int oula(int* min_p,int n,int ans)
{
	int n1= n / min_p[n],p1= min_p[n / min_p[n]];
	if (min_p[n] == n)
		return n - 1;
	else if (n1 % min_p[n] != 0)
		ans *= min_p[n]-1;
	else 
		ans *= min_p[n];
	return n1 == p1 ? ans * (n1 - 1) : oula(min_p, n1 , ans);
}
int main()
{
	const int n = 100;
	for (int i = 2; i <= n; i++)
		printf("%d %d\n",i, shai(n)[i]);
	return 0;
}