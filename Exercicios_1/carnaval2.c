#include <stdio.h>
int main()
{
	int  i;
	float note, minorNote = 11, majorNote = 5, endNote = 0;
	scanf("%f", &note);
	if (note >= 5 && note <= 10) {
		for (i = 0; i < 5; i++)
		{
			endNote = endNote + note;
			if (note < minorNote) {
				minorNote = note;
			}
			if (note > majorNote) {
				majorNote = note;
			}


			scanf("%f", &note);

		}

		endNote = endNote - (minorNote + majorNote);
		printf("%f \n", endNote);
	}

}
