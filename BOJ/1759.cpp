#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int L, C;

//  자음:consonant, 모음:vowel
void dfs(vector<char> v, int now, string s, int consonant, int vowel) {
	s.push_back(v[now]);
	if (v[now] == 'a' || v[now] == 'e' || v[now] == 'i' || v[now] == 'o' || v[now] == 'u')
		vowel++;
	else
		consonant++;

	if (s.length() == L) {
		if (vowel >= 1 && consonant >= 2)
			cout << s << '\n';
		return;
	}

	for (int i = now + 1; i < C; i++)
		dfs(v, i, s, consonant, vowel);
	
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> L >> C;
	vector<char> v(C);

	for (int i = 0; i < C; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	for (int i = 0; i <= C - L; i++)
		dfs(v, i, "", 0, 0);

	return 0;
}