#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,num,s;

	printf ("entrez un nombre: ");
	scanf ("%d", num);	

	s=0;
	for (i=1; i<num; i++) {
		if (num%i==0) {
			s=s+i;
		}
	}
	if (s==num) {
		printf ("%d est un nombre parfait",num);
	} else {
		printf ("%d n'est un nombre parfait",num);
	}


	return 0;
}
