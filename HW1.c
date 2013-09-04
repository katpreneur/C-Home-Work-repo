#include <stdio.h>

int main(int argc, char *argv[])
{
	char full_name[] = {'K','a','t','i','a',' ','S','u','c','h','k','o','v','a','\0'};

  for (int i = 0; i <= sizeof(full_name)/sizeof(char)-2; i++)
	{
		printf("%c\n", full_name[i]);
	}

	return 0;
}
