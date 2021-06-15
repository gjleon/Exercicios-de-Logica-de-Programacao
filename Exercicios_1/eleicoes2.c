#include <stdio.h>
int main()
{
	int votos ;
	float pvotosa, qvotos, qalibaba = 0, qalcapone = 0, vnulos = 0, vbranco = 0, vencedor, pvotosb;
	scanf("%d", &votos);

	for ( qvotos = 0; votos != -1; qvotos++)
	{
		if (votos == 83)
		{
			qalibaba++;
		}
		else if (votos == 93)
		{
			qalcapone++;
		}
		else if (votos == 0)
		{
			vbranco++;
		}
		else
		{
			vnulos++;
		}

		scanf("%d", &votos);
	}
	if (qalibaba> qalcapone)
	{
		vencedor = 83;
	}
	else
	{
		vencedor = 93;
	}
	
	pvotosa = (qalibaba / (qvotos-vnulos)) * 100;
	pvotosb = (qalcapone / (qvotos - vnulos)) * 100;
	printf("%.f\n%.f\n%.f\n%.f\n%.f\n%.2f\n%.2f", qalibaba, qalcapone, vbranco, vnulos, vencedor, pvotosa, pvotosb);

	return 0;
}
