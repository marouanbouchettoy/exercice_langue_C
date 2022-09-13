#include <stdio.h>
#include <stdlib.h>

//	int somme (int a,int b){
//		int som;
//		som=a+b;
//		return som;
//	}
int main() {
int *p1,*p2,a,b;
	p1=&a;
	p2=&b;
	printf("donner la 1 ere valeur");
	scanf("%d",p1);
	printf("donner la 2 eme valeur");
	scanf("%d",p2);
	printf("la somme =%d \n",(*p1)+(*p2));
    printf("la soustraction =%d \n",(*p1-*p2));
    printf("le produit des deux nombres =%d \n",(*p1)*(*p2));
	
}
