#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	// 1. 옷을 종류별로 구분
	unordered_map<string, int> map;
	for (vector<string> clothe : clothes)
		map[clothe[1]]++; // 각각의 종류가 몇개가 있는지

	// 2. 입지 않는 경우를 고려해서 모든 조합 계산
	int answer = 1;
	for (auto it = map.begin(); it != map.end(); it++) // iterater
		answer *= it->second + 1;

	// 3. 아무 종류의 옷도 입지 않는 경우 제외
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