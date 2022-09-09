#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch;
	printf ("entrez une letter: ");
	scanf ("%c",&ch);
	switch(ch) {
			//check lower case vowel letters
		case 'a':
			printf("%c is a vowel",ch);
			break;
		case 'e':
			printf("%c is a vowel",ch);
			break;
		case 'i':
			printf("%c is a vowel",ch);
			break;
		case 'o':
			printf("%c is a vowel",ch);
			break;
		case 'u':
			printf("%c is a vowel",ch);
			break;
		case 'y':
			printf("%c is a vowel",ch);
			break;
			//check upper case vowel letters
		case 'A':
			printf("%c is a vowel",ch);
			break;
		case 'E':
			printf("%c is a vowel",ch);
			break;
		case 'I':
			printf("%c is a vowel",ch);
			break;
		case 'O':
			printf("%c is a vowel",ch);
			break;
		case 'U':
			printf("%c is a vowel",ch);
			break;
		case 'Y':
			printf("%c is a vowel",ch);
			break;
		default:
			printf("%c is a consonant",ch);
			break;
	}
	return 0;
}
