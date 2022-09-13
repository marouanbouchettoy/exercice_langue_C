#include <stdio.h>
#include <stdlib.h>

int main (){
int L , C ; 
int i , j ;
    printf("veuillez saisir le nombre de lingne : ");
    scanf("%d",&L);
    printf("veuillez saisir le nombre de  colonne :");
    scanf("%d",&C);
    for(i=1;i<=L;i++){
	
    
    	 for(j=1;j<=C;j++){
		 if (i==1 || j==1|| i==L ||j==C )
		 printf("* ");
		 else
    	 	printf("  ");
    	 }
    	 
		 
		  
		  printf("\n");

}



	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
