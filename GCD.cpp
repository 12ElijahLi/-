#include <stdio.h>
int gcd(int a, int b);
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int n;
	if (a < b) {
		n = a; a = b; b = n;
	};
	printf("%d",gcd(a, b));
	return 0;
}
int gcd(int a, int b)
{
	
	return 0 == a % b ? b : gcd(b, a % b);
}
