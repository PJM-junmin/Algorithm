#include <iostream>
#include <algorithm>

using namespace std;
int cntArr[21];
pair<int, int> score[100000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int caseCount;
	int N;

	cin >> caseCount;
	for (int i = 0; i < caseCount; i++)
	{
		cin >> N;
		for (int j = 0; j < N; j++)
			cin >> score[j].first >> score[j].second;

		sort(score, score + N); // 오름차순, first 기준 오름차순, first같으면 second 기준 오름차순

		int maxScore = score[0].second;
		int count = 0;
		for (int i = 0; i < N; i++)
		{
			if (score[i].second <= maxScore) {
				count++;
				maxScore = score[i].second;
			}
		}
		cntArr[i] = count;
	}

	for (int i = 0; i < caseCount; i++)
	{
		cout << cntArr[i] << endl;
	}

	return 0;
}