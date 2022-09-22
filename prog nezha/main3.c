
#include <stdlib.h>
#include <stdio.h>
int main()
{
   int p = 0,j, nbr,S=0,a;
  int k=1;	float w=0;
  int i;
   printf(" Entrez un nombre: ");
   scanf("%d", &nbr);
   printf ("donner un nombre entre 1 et 3/:\n");
   scanf("%d",&a);
   switch (a){
   	case 1:
		
   for(j=2;j<=nbr;j++){

   for(i=1; i<=j; i++)
   {if(j%i==0)
   p++; 
     }
    if(p==2)
         {  S+=j;}
      p=0;  
   
    }
    printf("la somme des premiers  est :%d\n ",S);
    break;
 case 2:
 	
 	for(i=1;i<=nbr;i++){
 	k=k*i;	
	}printf("le factoriel de %d est %d: ",nbr,k);
	break;
    case 3: 
	
    	for(i=1;i<=nbr;i++){
	
        w+=(float)1/i;}
 		printf("la somme harmonique est %.2f",w);
    break;
 default:printf ("erreur");
break;
}

}



