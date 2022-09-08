#include <stdio.h>
#include <stdlib.h>

int main() {
int n ;
	start:
      printf ("entre le nombre des photocopies:\n");
	  scanf("%d",&n);
	  if (n<10){
	  
	  printf("le prix de photocopie est :\n 0.5 dh\n")	;}
	  else if (10<=n && n<20){
	  	printf("le prix de photocopie est :\n 0.4 DH\n");
	  }
	 else if (n>20) {
	   	printf("le prix de photocopie est :\n 0.3 dh \n");
	 }

	  goto start;
	
		
	return 0;
}
