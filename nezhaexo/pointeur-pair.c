#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,*p;
	p=&a;
	printf("donner un nombre ");
	scanf("%d",p);
	if(*p%2==0) printf("%d est pair",*p);
	else        printf("%d est impair",*p);
	return 0;
}
