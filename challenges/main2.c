#include <stdio.h>
#include <stdlib.h>

int main() {
	int L;
	int i , j;
	printf ("Veuillez saisir le nombre de lignes: ");
	scanf ("%d",&L);
	for (i=1; i<=L; i++) {
		for (j=1; j<=L-i; j++) {
			printf ("  ");
		}
		for (j=1; j<=(2*i-1); j++) {
			if (i==L || j==1 || j==(2*i-1)) {
				printf ("* ");
			} else {
				printf ("  ");
			}

		}
		printf("\n");
	}
}
