#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int i = 0; i < n; i++)
			cout << '*';
		cout << endl;
	}

	return 0;
}