#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int H = 0, W = 0, N = 0;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d %d %d", &H, &W, &N);

		if (N % H == 0)
			printf("%d\n", H * 100 + N / H);

		else
			printf("%d\n", (N % H) * 100 + N / H + 1);
	}

	return 0;
	
	
}