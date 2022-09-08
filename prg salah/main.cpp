#include <stdio.h>
#include<stdlib.h>
int main(){





printf("vouler vous commencez?\ntaper oui vous acceptez ou non si vous refusez:");
char ouinon [3];
char sgine;
int n1,n2, op;
scanf("%s",&ouinon);

if (ouinon [0] == 'o'&&ouinon [1] == 'u' &&ouinon [2] == 'i'){
while (ouinon [0] == 'o'&&ouinon [1] == 'u' &&ouinon [2]=='1'){
}
printf("donnez le premier nombre: ");
scanf("\n%d",&n1);
printf("donnez le signe: ");
scanf("\n%c",&sgine);
printf("donnez le deuxieme nombre: ");
scanf("\n%d",&n2);
if(sgine=='+'){
op=n1+n2;
}
else if (sgine=='-'){
op=n1-n2;
}
else if (sgine=='*'){
op=n1*n2;
}
else if (sgine=='/'){
op=n1/n2;
}
printf("%d", op);
printf("\ntaper oui vous acceptez ou non si vous refusez: ");
scanf("\n%s",&ouinon);
}printf("\nby");
return 0;
}
