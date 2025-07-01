#include <iostream>
#include <cstring>

using namespace std;

int arr[41][2]; // [n][0]은 0의 출력 횟수, [n][1]은 1의 출력 횟수

void fibonacci(int n) {
	if (arr[n][0] != -1 && arr[n][1] != -1) 
		return;

	if (n == 0) {
		arr[0][0] = 1;
		arr[0][1] = 0;
	}
	else if (n == 1) {
		arr[1][0] = 0;
		arr[1][1] = 1;
	}
	else {
		fibonacci(n - 1);
		fibonacci(n - 2);
		arr[n][0] = arr[n - 1][0] + arr[n - 2][0];
		arr[n][1] = arr[n - 1][1] + arr[n - 2][1];
	}
}

// 0 1 0
// 1 0 1
// 2 1 1
// 3 1 2
// 4 2 3
// 5 3 5

// 0: 1 0 1 1 2 3_ n이 1일때 fibonacci
// 1: 0 1 1 2 3 5_ n이 0일때 fibonacci

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(arr, -1, sizeof(arr));

	int n;
	cin >> n;
	while (n > 0) {
		int temp;
		cin >> temp;
		fibonacci(temp);
		cout << arr[temp][0] << ' ' << arr[temp][1] << '\n';
		n--;
	}

	return 0;
}