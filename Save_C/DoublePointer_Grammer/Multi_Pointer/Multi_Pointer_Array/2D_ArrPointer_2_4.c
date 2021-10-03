#include <stdio.h>


int main(void)
{
	int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	printf("%d %d \n", arr[1][0], arr[0][1]);
	printf("%d %d \n", *(arr[2] + 1), *(arr[1] + 1));
	printf("%d %d \n", (*(arr + 2))[0], (*(arr + 0))[1]);
	printf("%d %d \n", **arr, *(*(arr + 0) + 0));
	
	return 0;
}

/*
 배열 표
    0  1
 0 [1][2]
 1 [3][4]
 2 [5][6]
 
1. arr[1][0] == 3, arr[0][1] == 2 
2. arr[2][1] == 6, arr[1][1] == 4
3. arr[2][0] == 5, arr[0][1] == 2
4. arr[0][0] == 1, arr[0][0] == 1
*/