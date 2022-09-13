#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float t [10];
	int i;
	float s,m,p;
	
	printf("Veuillez saisir les elements du tableu \n");
		for (i=0;i<10;i++){
		printf("t[%d]= ",i);
		scanf("%f",&t[i]);
		}
		s=0;
		p=1;
		for(i=0;i<10;i++){
			s=s+t[i];
			p= p*t[i];	
		}
		m=s/10;
		printf(" la somme des elements du tableau est : %.2f\n",s);
			printf(" la produit des elements du tableau est : %.2f\n",p);
				printf(" la moyenne des elements du tableau est : %.2f\n",m);
	

	
	

	
	
	return 0;
}
