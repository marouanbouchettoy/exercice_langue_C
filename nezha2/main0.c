#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b=0,i;
printf("donner un nombre \n ");
scanf("%d",&a);
for(i=1;i<a;i++){
	if(a%i==0){
	b+=i;	
	}
}	
if(b==a){
	printf(" %d est parfait",a);
}	
else {
	printf(" %d nest pas parfait ",a);
}
	return 0;
}
