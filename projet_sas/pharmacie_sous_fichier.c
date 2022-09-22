#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int n=1;
typedef struct {
	int code ;
	char nom [100] ;
	int quantite ;
	float prix ;
	
}Pharmacie ;
  float tabachat[1000];
//FONCTION D'ORDER l'ALPHABETS
void alphabet (Pharmacie produit[],int n){

  
   int i,j;
	Pharmacie aide;
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(produit[i].nom,produit[j].nom)>0){
            aide=produit[i];
            produit[i]=produit[j];
            produit[j]=aide;  }
      }}
      printf("la liste tous les produits selon l’ordre alphabétique  croissant du nom:\n");
       for(i=0;i<n;i++){
          printf("%s\n",produit[i].nom);}}
// FONCTION D'ORDER lES PRIXS  
void triprix (Pharmacie produit[],int n ){

   int i,j;
   Pharmacie aide2 ;
    for ( i=0;i<n;i++){
    	for (j=i+1;j<=n;j++){
        	if(produit[i].prix<produit[j].prix){
    		aide2=produit[i];
    		produit[i]=produit[j];
    		produit[j]=aide2;
				
			}
			}
			}
    		printf("la liste tous les produits selon l’ordre  décroissant du prix:\n");
    		for(i=0;i<n;i++){
     			 printf("%s \n %f \n",produit[i].nom,produit[i].prix);
				}
	  }
    
//FONCTION DE RECHERCHER PAR CODE
void rech(Pharmacie produit [],int n ){
	int i,j;
	int rechC;
	printf("Entre Le code De Produit : \n");
	scanf("%d",&rechC);
	for(i=0;i<n;i++){
	  if(produit[i].code == rechC)
	 printf( " le produit rechercher est:%s\n",produit[i].nom);}}
//	FONCTION DE RECHERCHER PAR QUANTITE

void rechQU(Pharmacie produit [],int n ){
	int i,j;
	int rechQ;
	printf("Entre Le quantite De Produit : \n");
	scanf("%d",&rechQ);
	for(i=0;i<n;i++){
    	if(produit[i].quantite == rechQ)
      	 printf(" le produit rechercher est:%s\n",produit[i].nom);}}	
	
	
//	FONCTION DE AFFICHAGE


 
//   printf("Entre Le Nombre Des Produit Vous Voulez Ajoute\n");
//   scanf("%d",&n);
//   for(i=0;i<n;i++){
//   	printf("Donnez le nom du produit %d  :\n ",i+1);
//		scanf("%s",produit[i].nom);
//		printf(" Donnez le code du produit %d:\n ",i+1);
//		scanf("%d",&produit[i].code);
//		printf("Donnez la quantite du produit %d: \n ",i+1);
//		scanf("%d",&produit[i].quantite);
//		printf("Donnez le prix du produit %d:\n ",i+1);
//		scanf("%f",&produit[i].prix);
 //  }}
//ACHETER DES PRODUIT 



	
	

  
//DATE DE L'ACHETE
void timer(){
	int jour,year;
	char month[4];
	sscanf(__DATE__, "%s %d %d",month, &jour, &year);
    printf( "  %d / %s /%d \n",jour,month,year);
  
}

// ETAT DE STOCKE
void etat(Pharmacie produit [],int n){
	int i,cmp ;	
	for(i=0;i<n;i++){
       if(produit[i].quantite<=3){

	
      	printf("le nom du produit%d :\n%s\n ",i+1,produit[i].nom);
    	printf("  le code du produit%d:\n%.2d \n ",i+1,produit[i].code);
		printf(" la quantite du produit %d:\n%.2d\n ",i+1,produit[i].quantite);
		printf(" le prix du produit%d:\n%.2fDH\n ",i+1,produit[i].prix);
        printf("le prix TTC du produit %d:\n%.2fDH\n ",i+1,((produit[i].prix*0.15)+produit[i].prix));
    cmp++;}
                 
                 if(cmp==0) {
printf("les produits depasse 3  ");
          
     } 
                 
				 }

 
	  }

//Alimenter DES PRODUIT 
void alim(Pharmacie produit [], int n){
	int i,a;
	printf("Entre le code de produit:\n");
	scanf("%d",&produit[i].code);
	printf(" Entre Le Nombre Des Produit Que Vous Voulez Alimenter :\n");
	scanf("%d",&a);
	produit[i].quantite+=a;
	for(i=0;i<n;i++){
	   	printf("                          le nom du produit%d :\n%s\n ",i+1,produit[i].nom);
    	printf("       le code du produit%d:\n%.2d \n ",i+1,produit[i].code);
		printf("                          la quantite du produit %d:\n%.2d\n ",i+1,produit[i].quantite);
		printf("               le prix du produit%d:\n%.2fDH\n ",i+1,produit[i].prix);	 
	    printf("    le prix TTC du produit %d:\n%.2fDH\n ",i+1,((produit[i].prix*0.15)+produit[i].prix)); }
		 	}
//SUPRESSION DE PRODUIT
void sup(Pharmacie produit [], int n){
	int i,sp;
	printf("Entre le code des produit Que Vous Voulez Suppremer :\n");  
	
	scanf("%d",&sp);
	produit[i]=produit[i+1];	
	for(i=0;i<n;i++){
	   	printf("                            le nom du produit%d :\n%s\n ",i+1,produit[i].nom);
    	printf("      le code du produit%d:\n%.2d \n ",i+1,produit[i].code);
		printf("                             la quantite du produit %d:\n%.2d\n ",i+1,produit[i].quantite);
		printf("       le prix du produit%d:\n%.2fDH\n ",i+1,produit[i].prix);	 	

}}
//statistique


//DECLARATION DES FONCTIONS
 int main() {
//   FILE *p;
float somme,moyenne,MAX,MIN,r;
	    Pharmacie produit[100] ;
		Pharmacie aideS;
	int i,j,n,prix,Rcode,nbr,nb ;
	char s [100];
	int PTT=((produit[i].prix*0.15)+produit[i].prix); 
	
	


	
	
	
//	SWITCH
        menu:
       	    printf(" ____________________________   MENU DE PHARMACIE  ____________________________\n");
            printf("|>>>>>>>>>>>> \t 1.Ajoute un Nouveau Produit: <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
    	    printf("|>>>>>>>>>>>>\t 2.Tri Par Order Alphabet ET Tri Par Order Prix:<<<<<<<<<<<<<<|\n");
    	    printf("|>>>>>>>>>>>>\t 3.la recherche par code: <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
   	        printf("|>>>>>>>>>>>>\t 4.la rechercher par quantite :<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
   	        printf("|>>>>>>>>>>>>\t 5.la achate des produit<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n ");
         printf("|>>>>>>>>>>\t6.L' Etat De Produit Inférieure A 3 :<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
          	printf("|>>>>>>>>>>>>\t 7.Alimenter Et  Supprimer Un Produit :<<<<<<<<<<<<<<<<<<<<<<<|\n");
            printf("|>>>>>>>>>>>>\t 8.statistique de Produit :<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
            printf("L_____________________________________________________________________________|\n");
            
            printf("                 Entre votre choix:");
    	scanf("%d",&Rcode);
    	
	       
		switch (Rcode){
		case 1:
	printf("Entre le nombre des produits:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("                    Donnez le nom du produit %d  :\t ",i+1);
		scanf("%s",produit[i].nom);
		printf(" Donnez le code du produit %d:\t ",i+1);
		scanf("%d",&produit[i].code);
		printf("                     Donnez la quantite du produit %d: \t ",i+1);
		scanf("%d",&produit[i].quantite);
		printf("          Donnez le prix du produit %d:\t ",i+1);
		scanf("%f",&produit[i].prix);
     	printf("------------------------------------------------------------------------------------------------------\n");
		}
	   
//AFFICHAGE
       printf("*********************************************************************************************************\n");
        printf (" les informations des produits\n");
    for(i=0;i<n;i++){
	    printf("                  le nom du produit :\t%s\n ",produit[i].nom);
    	printf("  le code du produit:\n%.2d \n ",produit[i].code);
		printf("                     la quantite du produit:\t%.2d\n ",produit[i].quantite);
		printf(" le prix du produit:\n%.2fDH\n ",produit[i].prix);
		printf("                      le prix TTC du produit %d:\t%.2fDH\n ",i+1,((produit[i].prix*0.15)+produit[i].prix));	
		}

		break;	
		case 2:	
			printf("Entre 1 Pour Tri Les Alphabets Et 2 Pour Tri Les Prixs\n  ");
			scanf("%d",&nbr);
			if(nbr==1){
		          alphabet (produit,n);}
       	    else if   (nbr==2) {
       	          triprix(produit,n);
		   }
       	break;
       	case 3:	
     	rech(produit,n);
        
	    break;
	    case 4:
	    rechQU(produit,n);
		
		break;	
		case 5:
 
	printf("Entre le code de produit:\n");
	scanf("%d",&produit[i].code);
	printf(" Entre Le Nombre Des Produit Que Vous Voulez Acheter:\n");
	scanf("%d",&r);

	   for(i=0;i<n;i++){
	if(r<=produit[i].quantite){
		produit[i].quantite-=r;
	   	printf("le nom du produit%d :\n%s\n ",i+1,produit[i].nom);
    	printf("  le code du produit%d:\n%.2d \n ",i+1,produit[i].code);
		printf(" la quantite du produit %d:\n%.2d\n ",i+1,produit[i].quantite);
		printf(" le prix du produit%d:\n%.2fDH\n ",i+1,produit[i].prix);
        printf("le prix TTC du produit %d:\n%.2fDH\n ",i+1,((produit[i].prix*0.15)+produit[i].prix));
		tabachat[i]=r*produit[i].prix;
		}else{
			 printf("la quantite est insuffisante\n");
			 }
		 }
		

	
		timer();
		
		break;
		case 6 :
		etat(produit,n);
		
		break;	
		case 7:
		printf("entre 1 pour alimenter des produits et 2 pour suppremer un produit:\t");
		scanf("%d",&nb);
		if(nb==1){
		alim(produit,n)	;
		}
		else if (nb==2){
		sup(produit,n);
		}
		
		break;
		case 8:
	 

 for (i=0;i<n;i++){
    	for (j=i+1;j<=n;j++){
        	if(produit[i].prix>produit[j].prix){
	    		aideS=produit[i];
	    		produit[i]=produit[j];
	    		produit[j]=aideS;
			}

		}
		
			somme+= tabachat[i];
			moyenne = somme/n;
			MAX = produit[i].prix;
			MIN = produit[0].prix;

	
}
printf("le total des produits vendus en journée courante est:%f\n",tabachat[0]);
	printf("le total des produits vendus en journée courante est:%f\n",somme);
	printf("la moyenne des produits vendus en journée courante est:%f\n",moyenne);
	printf("le max des produits vendus en journée courante est:%f\n",MAX);
	printf("le min des produits vendus en journée courante est:%f\n",MIN);	
	

   
    	break;


}
goto menu ;
	return 0;
}
