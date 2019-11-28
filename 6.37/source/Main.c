#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int array[], int size);

int main(void)
{
	int array[50] = { 0 };
	int i, num;

	printf("請輸入欲比較之數列大小:");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("第%d個數值為:", (i + 1));
		scanf_s("%d", &array[i]);
	}

	printf("最大值為%d", recursiveMaximum(array, num));

	system("pause");
}

int recursiveMaximum(int a[], int s)
{
	int max;
	if (s + 1 == 1)
	{
		return a[s];
	}
	max = recursiveMaximum(a, s - 1);

	if (a[s] > max)
	{
		return a[s];
	}
	else
	{
		return max;
	}
}
