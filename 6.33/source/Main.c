#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string1[50];
char string2[50];
int i;

void stringreverse(void);

int main(void)
{
	printf("½Ð¿é¤J¤@¦ê¦r¦ê:");
	scanf_s("%s", string1,50);
	
	stringreverse();

	printf("%s", string2);

	printf("\n");

	system("pause");
	return 0;
}

void stringreverse(void)
{
	for (i = 0; i < strlen(string1); i++)
	{
		string2[i] = string1[strlen(string1) - 1 - i];
	}
}
