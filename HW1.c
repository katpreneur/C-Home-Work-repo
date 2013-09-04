#include <stdio.h>

int main(int argc, char *argv[])
{
	char full_name[] = {'K','a','t','i','a',' ','S','u','c','h','k','o','v','a','\0'};

	int i = 0;
		for (i = 0; i <= 14; i++)
	{
		printf("%c\n", full_name[i]);
	}
	return 0;
	}

//for(INITIALIZER; TEST; INCREMENTER) 
	//{
    //CODE;
//}
