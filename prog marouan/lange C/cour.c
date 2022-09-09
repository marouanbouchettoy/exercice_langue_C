# include <stdio.h>
# include <stdlib.h>


	int x;

int main(){

	printf("entrez un nombre: ");	
	scanf ("%d",&x);
	
	if (x%2 == 0){
		printf("le nombre est paire");
	}else {
		printf("le nombre est impaire");
	}
} 
