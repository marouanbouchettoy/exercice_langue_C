#include <stdio.h>
#include <stdlib.h>

/* echelle de richter */

int main() {
	int N;
	char *T[10]={"Micron","Tresmineur","Mineur","Leger","Fort","Majeur","Important","Devasrareur"};
 	printf(" saisire une valeur pour avoir la discription de ce nombre dans l eechelle de richeter");
    scanf("%d",&N);
	if(N>0 && N<10)
	{
	   printf("la discription est: %s",T[N-1]);
	}else {
		printf("erreur de saisire il faut que N compris entre 1 et 9");
	}
	
	return 0;
}
