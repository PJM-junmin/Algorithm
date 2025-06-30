#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> q, vector<int> ans)
{
	int answer = 0;

	vector<int> numbers(n);
	for (int i = 0; i < n; i++)
		numbers[i] = i + 1;

	int count = 0;
	vector<bool> select(n, false);
	fill(select.end() - 5, select.end(), true);

	do {
		vector<int> combine;
		for (int i = 0; i < n; i++)
			if (select[i] == true) 
				combine.push_back(numbers[i]);

		// isValid
		bool valid = true;
		for (int i = 0; i < q.size(); i++)
		{
			int matched = 0;
			for (int num : q[i])
				if (find(combine.begin(), combine.end(), num) != combine.end())
					matched++;
			if (matched != ans[i]) {
				valid = false;
				break;
			}
		}
		if (valid == true) 
			count++;
	} 
	while (next_permutation(select.begin(), select.end()));
	
	return count;
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> q = {{1, 2, 3, 4, 5},
							  {6, 7, 8, 9, 10},
							  {3, 7, 8, 9, 10},
							  {2, 5, 7, 9, 10},
							  {3, 4, 5, 6, 7}};
	vector<int> ans = {2, 3, 4, 3, 3};

	cout << solution(10, q, ans);


	return 0;
}