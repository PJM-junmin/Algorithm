#include <stdio.h>

void BubbleSort(int ary[], int len);
void DesSort(int ary1[], int len1);

int main(void)
{
	int Type = 0;
	int Number = 0;
	printf("몇개의 숫자 적을꺼?\n");
	scanf("%d", &Number);
	
	int arr[Number];
	for(int i = 0; i < Number; i++)
	scanf("%d", &arr[i]);
	
	printf("오름차순: 1 입력 / 내림차순: 2 입력\n");
	scanf("%d", &Type);
	
	if(Type == 1)
	BubbleSort(arr, sizeof(arr) / sizeof(int));
	
	if(Type == 2)
	DesSort(arr, sizeof(arr) / sizeof(int));
	
	for(int j = 0; j < Number; j++)
		printf("%d ", arr[j]);
	
	printf("\n");
	return 0;
}

void BubbleSort(int ary[], int len)
{
	int temp = 0;
	
	for(int i = 0; i < len - 1; i++) // 오름차순 정렬
	{
		for(int j = 0; j < (len - i) - 1; j++)
		{
			if(ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void DesSort(int ary1[], int len1)
{
	int temp1 = 0;
	
	for(int i = 0; i < len1 - 1; i++) // 내림차순 정렬
	{
		for(int j = 0; j < (len1 - i) - 1; j++)
		{
			if(ary1[j] < ary1[j + 1]) 
			{
				temp1 = ary1[j + 1];
				ary1[j + 1] = ary1[j];
				ary1[j] = temp1;
			}
		}
	}
}