#include <stdio.h>
#include <stdlib.h>
void saisie (){
	int a,b,c;
	printf("donner la valeur de a ");
	scanf("%d",&a);
	printf("donner la valeur de b ");
	scanf("%d",&b);
	printf("donner la valeur de c ");
	scanf("%d",&c);}

int determinant(int a,int b,int c){
	int var;
	var=(b*b)-4*c*a;
	printf("le determinant de lequation =%d",var);
}
		
		
		


int main() {
	int a,c,b;
	saisie();
	determinant(a,b,c);
	
	return 0;
}
