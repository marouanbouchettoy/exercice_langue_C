#include <stdio.h>
int main()
{
   int p = 0, i, nbr;
   
   printf(" Entrez un nombre: ");
   scanf("%d", &nbr);
   
   for(i=1; i<=nbr; i++)
   {
      if(nbr%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf(" %d est un nombre premier.",nbr);
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",nbr);
   }
}
