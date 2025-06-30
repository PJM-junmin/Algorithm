#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

/*
	1. 1 <= N <= 100,000
	2. completion.Length = participant - 1
	3. 1 <= name.length <= 20
	4. same name can valid in group
*/
// hash ���� string

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";

	// Sorting���� Ǯ��
	
	//// 1. �� �迭�� �����Ѵ�.
	//sort(participant.begin(), participant.end());
	//sort(completion.begin(), completion.end());
	//// 2. �� �迭�� �ٸ� ������ ã�´�.
	//int i = 0;
	//for (int i = 0; i < completion.size(); i++)
	//{
	//	if (participant[i] != completion[i])
	//		break;
	//}
	//
	//// 3. completion �迭�� ���� ã�Ƶ� ���� ���ٸ�, ������ ������ �������� ���� �����̴�.
	//return participant[participant.size() - 1];

	// Hash�� Ǯ��

	// 1. Hash Map�� �����
	unordered_map<string, int> map;
	for (auto player : participant) // participant ��ȸ
	{
		if (map.end() == map.find(player)) // map�� ������ ������,
			map.insert(make_pair(player, 1));
		else
			map[player]++; // player(key) : 1 + 1(value)
	}
	// 2. Hash Map���� ������ ������ ����.
	for (auto player : completion)
		map[player]--;
	// 3. Hash Map���� value�� 0�� �ƴ� ������ ã�´�.
	for (auto player : participant)
	{
		if (map[player] > 0)
		{
			answer = player;
			break;
		}
	}
	return answer;
}

int main() {
	// connect cin, cout, just (use cin or cout) or (use scanf or printf)
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<string> part = { "leo", "kiki", "eden" };
	vector<string> comp = { "eden", "kiki" };
	cout << solution(part, comp);

	return 0;
}
