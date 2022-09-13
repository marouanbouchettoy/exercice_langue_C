#include <stdio.h>
#include <stdlib.h>



	void echange(int *a,int *b){
		int tmp;
		tmp=*a;
		*a=*b;
		*b=tmp;
	} 
	int main() {
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf( "%d ;%d \n",a,b);
	echange(&a,&b);
	printf("%d ;%d ",a,b);
	return 0;
}
