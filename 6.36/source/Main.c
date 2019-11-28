#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int i, num;
	int search, ans;
	int data[100] = { 0 };

	printf("請輸入資料個數(大小需排序):");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("第%d筆數值為: ", (i + 1));
		scanf_s("%d", &data[i]);
	}

	printf("輸入資料為: ");
	for (i = 0; i < num; i++)
	{
		printf("%d   ", data[i]);
	}

	printf("\n請輸入欲搜尋的資料: ");
	scanf_s("%d", &search);

	ans = binarysearch(data, search, num);

	if (ans < 0)
	{
		printf("找不到 %d\n", search);
	}
	else
	{
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;


}
