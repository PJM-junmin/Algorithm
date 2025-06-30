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
// hash 문제 string

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";

	// Sorting으로 풀기
	
	//// 1. 두 배열을 정렬한다.
	//sort(participant.begin(), participant.end());
	//sort(completion.begin(), completion.end());
	//// 2. 두 배열이 다를 때까지 찾는다.
	//int i = 0;
	//for (int i = 0; i < completion.size(); i++)
	//{
	//	if (participant[i] != completion[i])
	//		break;
	//}
	//
	//// 3. completion 배열을 전부 찾아도 답이 없다면, 마지막 선수가 완주하지 못한 선수이다.
	//return participant[participant.size() - 1];

	// Hash로 풀기

	// 1. Hash Map을 만든다
	unordered_map<string, int> map;
	for (auto player : participant) // participant 순회
	{
		if (map.end() == map.find(player)) // map에 선수가 없으면,
			map.insert(make_pair(player, 1));
		else
			map[player]++; // player(key) : 1 + 1(value)
	}
	// 2. Hash Map에서 완주한 선수를 뺀다.
	for (auto player : completion)
		map[player]--;
	// 3. Hash Map에서 value가 0이 아닌 선수를 찾는다.
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
