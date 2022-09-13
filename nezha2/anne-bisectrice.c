#include <stdio.h>
#include <stdlib.h>


	void bis (int a){
		if((a%4==0 && a%100!=0) || a%400==0)
		{printf("lanne est bisectrice");}
		else printf("nest pas bisectrice");
	}
	
int main(){	
	int a;
	printf("donner lanee");
	scanf("%d",&a);
    bis(a);
	
	
	
	return 0;
}
