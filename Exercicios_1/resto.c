#include <stdio.h>
int main()
{
	int a, b, i, j,trocar;
	scanf("%d%d", &a, &b);
	if (b<a)
	{
		trocar = b;
		b = a;
		a = trocar;

	}
	for ( i = 1+a; i < b; i++)
	{
		if (i%5==2 || i % 5 == 3)
		{
			j = i;
			printf("%d\n", j);
		}
		
	}
	return 0;
}