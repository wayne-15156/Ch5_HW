#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int main(void)
{
	int i;
	int face1, face2;
	int roll;
	int frequency[SIZE] = { 0 };

	srand(time(NULL));


	for (roll = 1; roll <= 36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		++frequency[(face1 + face2)];
	}

	printf("兩顆骰子點數和：\n");

	for (i = 2; i <= 12; i++)
	{
		printf("%d\t:%d\n", i, frequency[i]);
	}

	system("pause");
	return 0;
}