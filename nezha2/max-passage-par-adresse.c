#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
	int m = (a<b)? b:a;
	return m;
}
int main() {
	int a,b,var;
	printf("donner la prmier valeur");
	scanf("%d",&a);
	printf("donner la deuxieme valeur ");
	scanf("%d",&b);
	var=max(a,b);
     printf ("le max =%d",var);
	return 0;
}
