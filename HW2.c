#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check_vowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
		printf("This is a vowel %c\n", ch);

	}
}

int main(int argc, char *argv[])
{
	char input[60];
	while(strncmp(input, "exit", 4))
	{
		printf("Please enter the word\n");
		fgets(input, 60, stdin);
		int i = 0;
		for(i = 0; i < strlen(input); i++) {
			printf("%c\n", input[i]);

			check_vowel(input[i]);
		}
	}
	return 0;
}


