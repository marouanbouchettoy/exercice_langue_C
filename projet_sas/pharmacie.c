#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int code ;
	char nom [100] ;
	int quantite ;
	float prix ;
	
}Pharmacie ;

//FONCTION D'ORDER l'ALPHABETS
void alphabet  (Pharmacie produit[],int n,FILE *p ){
  
   int i,j;
   char s[100];
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(produit[i].nom,produit[j].nom)>0){
            strcpy(s,produit[i].nom);
            strcpy(produit[i].nom,produit[j].nom);
            strcpy(produit[j].nom,s);  }
      }}
      fprintf(p,"la liste tous les produits selon l’ordre alphabétique  croissant du nom:\n");
       for(i=0;i<n;i++){
      fprintf(p,"%s\n",produit[i].nom);}}
//FONCTION D'ORDER LES PRIXS
void num  (Pharmacie produit[],int n, FILE *p){
   int i,j;
   int aide ;
    for (i=0;i<n;i++){
    	for (j=i+1;j<n;j++){
		
    	if(produit[i].prix<produit[j].prix){
    		aide=produit[i].prix;
    		produit[i].prix=produit[j].prix;
    		produit[j].prix=aide;	}}}
    		fprintf(p,"la liste tous les produits selon l’ordre  décroissant du prix:\n");
    		for(i=0;i<n;i++){
      fprintf(p,"%.2fDH\n",produit[i].prix);}}
//FONCTION DE RECHERCHER PAR CODE
void rech(Pharmacie produit [],int n , FILE *p){
	int i,j;
	int rechC;
	printf("Entre Le code De Produit : \n");
	scanf("%d",&rechC);
	for(i=0;i<n;i++){
	if(produit[i].code == rechC)
	 fprintf(p, " le produit rechercher est:%s",produit[i].nom);}}
//	FONCTION DE RECHERCHER PAR QUANTITE

void rechQU(Pharmacie produit [],int n , FILE *p){
	int i,j;
	int rechQ;
	printf("Entre Le quantite De Produit : \n");
	scanf("%d",&rechQ);
	for(i=0;i<n;i++){
	if(produit[i].quantite == rechQ)
	 fprintf(p," le produit rechercher est:%s",produit[i].nom);}}	
	
	
	





//DECLARATION DE FICHIER

 

int main() {
   FILE *p;
	Pharmacie produit[100] ;
	int i,n,prix,Rcode,rechC,rechQ ;
	char s [100];
	
	int PTT=((produit[i].prix*0.15)+produit[i].prix); 
	
	
	p=fopen("struct.doc","w");
	if ( p== NULL){
		printf("le fichier n'existe pas \n");
	}
	else {
		

//	REMPLISSAGE 
    printf("^^^^^^^^^^^^^^^^^^^MUNE DE PHARMACIE^^^^^^^^^^^^^^^^^^^^^\n");
	printf ("Veuillez les informations des produits	: \n");
	printf("Entre le nombre des produits:\t");
	scanf("%d",&n);
	

	for(i=0;i<n;i++){
		printf("Donnez le nom du produit %d  :\n ",i+1);
		scanf("%s",produit[i].nom);
		printf(" Donnez le code du produit %d:\n ",i+1);
		scanf("%d",&produit[i].code);
		printf("Donnez la quantite du produit %d: \n ",i+1);
		scanf("%d",&produit[i].quantite);
		printf("Donnez le prix du produit %d:\n ",i+1);
		scanf("%f",&produit[i].prix);
	printf("-------------------------------------------------------------\n");
		}
//AFFICHAGE
printf("***********************\n");
        fprintf (p," les informations des produits\n");
        	for(i=0;i<n;i++){
			
		fprintf(p,"le nom du produit :%s\n ",produit[i].nom);
    	fprintf(p,"  le code du produit:%.2d \n ",produit[i].code);
		fprintf(p," la quantite du produit:%.2d\n ",produit[i].quantite);
		fprintf(p," le prix du produit:%.2fDH\n ",produit[i].prix);
		fprintf(p,"le prix TTC du produit %d:%.2fDH\n ",i+1,((produit[i].prix*0.15)+produit[i].prix));	}}
	
	alphabet(produit,n,p);
	num(produit,n,p); 
	printf("Entre 1 pour la recherche par code et 2 pour la rechercher par quantite :\n");

	scanf("%d",&Rcode);
		switch (Rcode){
		case 1:			
		rech(produit,n,p);
       	break;
       	case 2 : 
       	rechQU(produit,n,p);
       	break;
	
}
	 fclose(p);	

	return 0;
}
