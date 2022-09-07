#include <stdio.h>
#include <stdlib.h>

/*  change MAD to EUR or USD*/

int main( ) {
	float MAD,R;
	int C;
	   printf("entre votre MAD");
	   scanf("%f",&MAD);
	   printf("si vous voulez changer votre MAD en USD taper 1 si vous voulez le en EUR taper 2");
	    scanf("%d",&C);
	    if(C==1)
	      {R=MAD*0.11;
	      printf("votre USD est:%.2f",R);
		  }
	    if(C==2){
		   R=MAD*0.096;
	       printf("votre EUR est:%.2f",R);
	      }
	      
	return 0;
}
