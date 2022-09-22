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

int main (){
    int i,a;
    printf("donner la valeur de a \n");
    scanf("%d",&a);


multiple(a);

    return 0;
}
