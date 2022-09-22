#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void multiple(int a ){
    int i;
    printf("le tableau de multiplication de %d est \n :",a);
    for(i=1;i<11;i++){
        printf("%d x %d est :%d \n",a,i,a*i);
    }

}

int somme(int a,int b){
	int som;
	som=a+b;
	return som;
}


int main (){
    int i,a,b,som;
    printf("donner la valeur de a \n");
    scanf("%d",&a);
    printf("donner la valeur de b \n");
    scanf("%d",&b);
    multiple(a);
    som=somme(a,b);
printf("la somme de %d et %d = %d",a,b,som);
    return 0;
}
