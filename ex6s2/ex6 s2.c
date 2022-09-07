#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* prog des voyelle */

void main() {
	char *T[6]={"a","e","i","o","u","y"},C;
	int i;
	 printf("saisire un caracter");
	 scanf("%s",&C);
	for(i=0;i<6;i++)
	 if( strcmp(&C,T[i])==0){
	 printf("votre charactere est le voyelle %s",T[i]);
	  return 0;
	 }
	 printf("votre caracter n'est pas un voyelle");
	 
	 }
