#include	<stdio.h>
int main() {
	int balance, minorBalance, days, operation=0, i;

	scanf("%d%d", &days, &balance );
	scanf("%d", &operation );
	for ( i = 0;i < days;i++) {

		balance =  balance + operation;

		if (balance< minorBalance || i == 0) {
			minorBalance = balance;
		}
		printf("i = %d\n",i );
		scanf("%d\n", &operation );
	}
	printf("%d\n", minorBalance );
	return 0;
}
