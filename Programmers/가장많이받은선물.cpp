#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts)
{
	int answer = 0;
	int n = friends.size();
	unordered_map<string, int> name;
	for (int i = 0; i < n; i++)
		name[friends[i]] = i;

	vector<vector<int>> giftCount(n, vector<int>(n, 0));
	vector<int> give(n, 0);
	vector<int> received(n, 0);

	// 1. 선물 기록
	for (string record : gifts) {
		int spacePos = record.find(' ');
		string from = record.substr(0, spacePos);
		string to = record.substr(spacePos + 1);

		int i = name[from];
		int j = name[to];

		giftCount[i][j]++;
		give[i]++;
		received[j]++;
	}
	
	// 2. 선물 지수
	vector<int> score(n, 0);
	for (int i = 0; i < n; i++)
		score[i] = give[i] - received[i];

	// 3. 선물 계산
	vector<int> result(n, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int AToB = giftCount[i][j];
			int BToA = giftCount[j][i];

			if (AToB > BToA)
				result[i]++;
			else if (AToB < BToA)
				result[j]++;
			else {
				if (score[i] > score[j])
					result[i]++;
				else if (score[i] < score[j])
					result[j]++;
			}
		}
	}

	return *max_element(result.begin(), result.end());
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> friends = { "muzi", "ryan", "frodo", "neo" };
	vector<string> gifts = { "muzi frodo", "muzi frodo", 
							 "ryan muzi", "ryan muzi", 
							 "ryan muzi", "frodo muzi", 
							 "frodo ryan", "neo muzi" };

	cout << solution(friends, gifts) << endl;

	return 0;
}