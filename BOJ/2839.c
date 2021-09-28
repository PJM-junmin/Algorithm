#include <stdio.h>

int main(void)
{
	int kg = 0, cnt = 0, Three_Multiple = 0, result = 0;
	scanf("%d", &kg);
	
	if(kg % 5 == 0) // 5의 배수일 때
	{
		printf("%d", kg / 5);
		return 0;
	}
	
	
	if(kg % 3 == 0)
		Three_Multiple = kg / 3; // 3의 배수 개수 저장
	
	for(int i = kg / 5; i > 0; i--) 
/*3의 배수도 아니고 5의 배수가 아닐 수 있다면 혼합된 경우도 있을 것이다. 
이것을 반복문을 이용하여 풀도록 한다. 
반복문을 이용하여 kg / 5의 값을 초기값으로 설정하고 점차적으로 -1씩 더한다. 
그렇다면 (kg - 5 * i)의 값이 매우 작은 값부터 시작되어 3의 배수를 찾게 한다면 5킬로그램의 봉지 개수를 늘릴 수 있다. 
만약 찾았다면 봉지의 개수를 result에 저장한다.*/
	{
		if((kg - 5 * i) % 3 == 0)
		{
			result = (kg - 5 * i) / 3 + i;
			break;
		}
	}
	
	if(Three_Multiple == 0 && result == 0)
	{
		printf("-1");
		return 0;
	}
	
	
	if(result == 0)
		printf("%d", Three_Multiple);
	else
		printf("%d", result);
	return 0;
}