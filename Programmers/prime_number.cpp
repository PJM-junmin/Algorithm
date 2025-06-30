#include <iostream>
#include <string>
#include <vector>
#include <set> // 집합, 조합 시, 중복되는 걸 모두 제거
#include <cmath>

using namespace std;

/*
* count prime_number
	1 <= numbers.length <= 7
	0 <= numbers <= 9
	"013" = [0][1][3]

	// 에라스토테네스의 체
	2,3,4 ~의 배수인가?(71의 제곱근만 구함)
*/

// set 구현
set<int> numberSet;

bool isPrime(int number)
{
	// 1. 0과 1은 소수가 아님
	if (number == 0 || number == 1)
		return false;

	// 2. 에라토스테네스의 체
	int limt = sqrt(number);
	for (int i = 2; i <= limt; i++)
		if (number % i == 0)
			return false;
	return true;
}

// 현재까지의 조합, 현재까지 사용되지 않는 number
void recursive(string comb, string others)
{
	// 1. 현 조합을 numberSet에 추가
	if (comb != "")
	{
		numberSet.insert(stoi(comb)); // stoi(string -> int)
		cout << comb << '\n';
	}

	// 2. 현 조합 + others[i] 조합하여 새로운 조합을 만들어 본다.
	for (int i = 0; i < others.size(); i++)
		recursive(comb + others[i], others.substr(0, i) + others.substr(i + 1));
}

int solution(string numbers) {
	// 1. 모든 숫자 조합을 만든다.
	recursive("", numbers);
	
	// 2. 소수의 개수를 샌다.
	int answer = 0;
	for (int number : numberSet)
		if (isPrime(number))
			answer++;
	
	// 3. 소수의 개수를 반환
	return answer;
}

int main(){
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution("11");

	return 0;
}
