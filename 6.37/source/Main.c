#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int array[], int size);

int main(void)
{
	int array[50] = { 0 };
	int i, num;

	printf("�п�J��������ƦC�j�p:");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("��%d�ӼƭȬ�:", (i + 1));
		scanf_s("%d", &array[i]);
	}

	printf("�̤j�Ȭ�%d", recursiveMaximum(array, num));

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
