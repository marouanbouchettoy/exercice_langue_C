#include <stdio.h>
#include <stdlib.h>

/* un programme C qui demande à l’utilisateur d’entrer 1, 2 ou 3 au clavier, puis un entier positif n.
Selon le premier nombre saisi, on calcule:
1. la somme des n premiers nombres entiers positifs.
2. le factoriel de n
3. la somme harmonique : S= 1+1/2+…+1/n */

void main() {
	int N,x,i,j,C,f,S;
	float K;
	 f=1;
	 C=S=0;
	printf("entrer nombre N ");
    scanf ("%d",&N);
	printf("la somme des n premiers nombres entiers positifs tapez'1'.\nle factoriel de N tapez '2'.\nla somme harmonique tarez '3'.\n ");
	scanf ("%d",&x);
	   if(x==1){
        if(N==0 || N==1)
            S=0;
        else
		{
			for(i=2;i<=N;i++)
		    {
	            for (j=1;j<=i;j++)
	            { 
				if (i%j==0)
				 C++;
				} 
 				if (C==2)
				{  
					S+=i;
				}
				C=0;
			} 
		}  
				 
				printf("La somme des nombre premier est %d",S);	}
				
					 
				
    if(x==2)
	           {
	           	for(i=2;i<N+1;i++)
	           	{ 
	           	   f*=i;
				   }
				   printf("factorielle de %d est %d:",N,f);
		
           	   }
   if(x==3)
	           {
	  	           if (N==0)
	  	            printf("INFINI");
	  	           else{ 
					   K=1;
	  	           	 for(i=2;i<=N;i++)
						  {
						  	K+=(float)1/i;
						   }
						    printf("la sommme harmonique de %d est %.2f",N,K);
	  	           	  
					    }
	           }
}
