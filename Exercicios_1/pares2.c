#include <stdio.h>
int main ()
{
	int numb1, numb2, i;
	scanf("%d%d", &numb1, &numb2);
	for ( i = numb1+1; i < numb2; i++)
	{
		if (i%2==0)
		{
			printf("%d\n", i);
		}
		
	}
	return 0;
}