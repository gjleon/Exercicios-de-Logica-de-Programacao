#include <stdio.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (k = n; k > i; k--)
		{
			printf(" ");

		}
		for (j = 0; j < (i * 2) - 1; j++)
		{
			printf("*");

		}
		
		printf("\n");
	}
	
	return 0;
}