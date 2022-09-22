
#include <stdio.h>
#include <stdlib.h>
#define n 40 
int main() {
	const int hh=2;
	int tab[n],taille,i,j;
	printf("donner la taille du tableau\n ",n);
	scanf("%d",&taille);
	for(i=0;i<taille;i++){
		printf("donner la valeur %d du tableau ",i);
    	scanf("%d",&tab[i]);
	}
	for(i=0;i<taille;i++){
			printf("%d \n",tab[i]);	
	}
	printf("le trie est ");
	for( i=0;i<taille;i++){
		for( j=i+1;j<taille;j++){
			int var;
		if(tab[i]>=tab[j]){
			var=tab[i];
			tab[i]=tab[j];	
			tab[j]=var;
		}		
		}
	}
	
	for(j=0;j<taille;j++){
		printf("%d",tab[j]);
	}
	
	return 0;}
	
	
	
