#include <stdio.h>
int main()
{
	int n, i, altura, distancia;
	char comando;
	scanf("%d", &n);
	scanf("%c", &comando);
	for ( i = 0; i < n; i++)
	{
		if (comando == 's')
		{
			altura = altura + 5;
		}
		scanf("%c", &comando);
		printf("%d", altura);
	}
	return 0;

}

