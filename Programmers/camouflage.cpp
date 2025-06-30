#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	// 1. ���� �������� ����
	unordered_map<string, int> map;
	for (vector<string> clothe : clothes)
		map[clothe[1]]++; // ������ ������ ��� �ִ���

	// 2. ���� �ʴ� ��츦 ����ؼ� ��� ���� ���
	int answer = 1;
	for (auto it = map.begin(); it != map.end(); it++) // iterater
		answer *= it->second + 1;

	// 3. �ƹ� ������ �ʵ� ���� �ʴ� ��� ����
	return answer - 1;
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<string>> clothes = {{"yellowhat", "headgear"},
									  {"bluesunglasses", "eyewear"},
									  {"green_turban", "headgear"}};

	cout << solution(clothes);

	return 0;
}