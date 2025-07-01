#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, command, X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> command;
		switch (command) {
		case 1:
			cin >> X;
			dq.push_front(X);
			break;
		case 2:
			cin >> X;
			dq.push_back(X);
			break;
		case 3:
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			break;
		case 4:
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			break;
		case 5:
			cout << dq.size() << "\n";
			break;
		case 6:
			(dq.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
			break;
		case 7:
			(dq.empty()) ? cout << -1 << "\n" : cout << dq.front() << "\n";
			break;
		case 8:
			(dq.empty()) ? cout << -1 << "\n" : cout << dq.back() << "\n";
			break;
		}
	}
	return 0;
}