#include<stdio.h>
struct zhi { int x; int y; };
zhi EXgcd(int a, int b)
{
	if (b == 0) return 	{ 1, 0 };
	zhi jie = EXgcd(b, a % b);
	int tmp = jie.y;
	jie.y = jie.x - a / b * jie.y;
	jie.x = tmp;
	return jie;
}
int main()
{
	int a, b, x, y;
	scanf_s("%d %d", &a, &b);
	printf("%d %d", EXgcd(a, b).x, EXgcd(a, b).y);
	return 0;
}