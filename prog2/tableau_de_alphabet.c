#include <stdio.h>
#include <stdlib.h>

int main() {
	char t [6];
	int j;
	t[0]='a';
	t[1]='e';
	t[2]='i';
	t[3]='u';
	t[4]='o';
	t[5]='y';
	printf("les voyelles de l alphabet francais sont :\n");
	
	for(j=0;j<6;j++)
	printf("%c\n",t[j]);
	
	

	
	
	return 0;
}
