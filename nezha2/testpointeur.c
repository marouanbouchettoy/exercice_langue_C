#include <stdio.h>
#include <stdlib.h>


int main() {
	int a=2;
	int *p;
	p=&a;
	printf("%d \n",*p);
	printf ("%d \n",a);
	*p=85;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d",&a);
	return 0;
}
