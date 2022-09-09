#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define n 40 
int main() {
	const int hh=2;
	int tab[n],taille,i;
	printf("donner la taille du tableau\n ",n);
	scanf("%d",&taille);
	for(i=0;i<taille;i++){
		printf("donner la valeur %d du tableau ",i);
    	scanf("%d",&tab[i]);
	}
	for(i=0;i<taille;i++){
			printf("%d \n",tab[i]);	
	}
	printf("%d",hh);
}
