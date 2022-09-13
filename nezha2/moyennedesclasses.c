#include <stdio.h>
#include <stdlib.h>
int main() {
	
	float note[3][4][2]= {{{14,12},{8,10},{10,10},{8,19}}
	                     ,{{2,5},{5,8},{3,9},{2,10}},{{15,10},{18,10},{19,14},{10,16}}};
//	int i,j,k;
//	float s,m;
//	float note [3][4][2];
//		for(i=1;i<=3;i++){
  //      	for(j=1;j<=4;j++){
	//    	  for(k=1;k<=2;k++){
	//	       printf( "note[%d][%d][%d]=",i,j,k);
	//	       scanf("%f",&note[i][j][k]);
	//		  }
	//		  }  
	//		  }
			  
			  
			  
			  
    	for(i=1;i<=3;i++){
		  s=0;
	      m=0;
        	for(j=1;j<=4;j++){
	    	  for(k=1;k<=2;k++){
			  	s=s+note[i][j][k];
			  }
	    	}
	    	m=s/8;
	    	printf("la moyenne de la classe num  %d = %.2f ",i,m);
	}
	return 0;
}
