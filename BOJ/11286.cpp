#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct sorting {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	priority_queue<int, vector<int>, sorting> q;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0) {
			if (q.empty())
				v.push_back(0);
			else {
				v.push_back(q.top());
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
	
	return 0;
}