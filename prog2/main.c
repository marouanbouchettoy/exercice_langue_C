#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (){
	char a ;
	
	printf("entre un caractère:\n");
	scanf("%c",&a);

	if ( (a=='a') || (a== 'e') || (a== 'i')||(a== 'o') ||(a== 'u')  ||(a=='y') || (a=='A' )|| (a=='E') || (a== 'I')||(a== 'O') ||(a== 'U')  ||(a=='Y') ){
	printf("c'est caractere est voyelle ");
	}
	else{ 
		printf("c'est caractere n'est pas voyelle\n");
	}
    getch();
	return 0;

		
}
