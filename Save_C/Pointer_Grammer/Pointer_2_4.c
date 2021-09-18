#include <stdio.h>

int main(void)
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int * First_ptr = &arr[0]; // arr방의 1번째 방을 가리킴
	int * Final_ptr = &arr[5]; // arr방의 마지막(6번째) 방을 가리킴
	int temp = 0; //포인터를 저장할 int형 변수
	
	for(int i = 0; i < 3; i++)
	{	
		temp = *First_ptr; 
		//*First_ptr = arr배열의 첫번째 index에 들어있는 값을 꺼낸다 -> temp안에 넣는다
		//<temp = 1>이랑 같음
		
		*First_ptr = *Final_ptr;
		/*Final_ptr이 가리키고 있는 index 안에 있는 값을 
		*First_ptr이 가리키고 있는 index 방 안에다가 넣는다 */
		//{6, 2, 3, 4, 5, 6} 현 상태
		
		*Final_ptr = temp;
		//temp가 가리키고 있는 값(1)을 *Final_ptr이 가리키고 있는 index(arr[5])에 넣는다
		//{6, 2, 3, 4, 5, 1} 현 상태
		
		First_ptr += 1;
		//First_ptr 포인터 변수가 다음 index를 가리킨다
		
		Final_ptr -= 1;
		//Final_ptr 포인터 변수가 전 index를 가리킨다.
	}
	
	for(int j = 0; j < 6; j++)
		printf("%d ", arr[j]);
	
	return 0;
}