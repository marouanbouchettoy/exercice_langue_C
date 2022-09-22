#include <stdio.h>
#include <stdlib.h>


int main() {
	 char c;
   printf("donner le caractere\n");
   scanf("%c",&c);
   if((c=='a')|| (c=='u')|| (c=='i') || (c=='o')|| (c=='e')|| (c=='y') ||(c=='A')|| (c=='U')|| (c=='I') || (c=='O')|| (c=='E')|| (c=='Y')){
   	printf("le caractere est voyelle");
   	
   }
   else{
   	printf("le caratere nest pas voyelle");
   }
	return 0;
}
