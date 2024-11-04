#include <stdio.h>
#include <cmath>
int main()
{
	int n;
	scanf_s("%d", n);
	int max_prime = sqrt(n + 0.5);
	int ans = n;
	for (int i = 2; i <= max_prime; i++)
	{
		if (n % i == 0)
			ans = ans / i * (i - 1 );
		while(n % i == 0)
			n /= i;
	}
	if (n > 1)ans = ans / n * (n - 1);

	return 0;
}