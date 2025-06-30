#include <iostream>
#include <string>
#include <vector>
#include <set> // ����, ���� ��, �ߺ��Ǵ� �� ��� ����
#include <cmath>

using namespace std;

/*
* count prime_number
	1 <= numbers.length <= 7
	0 <= numbers <= 9
	"013" = [0][1][3]

	// �������׳׽��� ü
	2,3,4 ~�� ����ΰ�?(71�� �����ٸ� ����)
*/

// set ����
set<int> numberSet;

bool isPrime(int number)
{
	// 1. 0�� 1�� �Ҽ��� �ƴ�
	if (number == 0 || number == 1)
		return false;

	// 2. �����佺�׳׽��� ü
	int limt = sqrt(number);
	for (int i = 2; i <= limt; i++)
		if (number % i == 0)
			return false;
	return true;
}

// ��������� ����, ������� ������ �ʴ� number
void recursive(string comb, string others)
{
	// 1. �� ������ numberSet�� �߰�
	if (comb != "")
	{
		numberSet.insert(stoi(comb)); // stoi(string -> int)
		cout << comb << '\n';
	}

	// 2. �� ���� + others[i] �����Ͽ� ���ο� ������ ����� ����.
	for (int i = 0; i < others.size(); i++)
		recursive(comb + others[i], others.substr(0, i) + others.substr(i + 1));
}

int solution(string numbers) {
	// 1. ��� ���� ������ �����.
	recursive("", numbers);
	
	// 2. �Ҽ��� ������ ����.
	int answer = 0;
	for (int number : numberSet)
		if (isPrime(number))
			answer++;
	
	// 3. �Ҽ��� ������ ��ȯ
	return answer;
}

int main(){
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution("11");

	return 0;
}
