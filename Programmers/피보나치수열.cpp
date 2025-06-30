#include <iostream>
#include <vector>
#include <string>

using namespace std;


int solution(int n) {
	int answer = 0;
	int mod = 1234567;

	vector<int> fib(n + 1); // ¹è¿­ size (n+1)
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; ++i)
		fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
	
	return fib[n];
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution(3) << endl;
	cout << solution(5);

	return 0;
}