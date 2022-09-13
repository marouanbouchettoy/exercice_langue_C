#include <stdio.h>
#include <stdlib.h>
void premier(int a){
	int i,j=0;
	for(i=2;i<a;i++){
	if(a%i==0) 	
		j++;
	}	
    	if(j==0)printf("%d est premier ",a);
		else printf("%d nest pas premier ",a);
	
}
int main() {
	int a;
	printf("donner un nombre");
	scanf("%d",&a);
	premier(a);
	return 0;
}
