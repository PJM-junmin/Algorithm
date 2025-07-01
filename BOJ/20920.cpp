#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<string, int> wordMap; // count
vector<string> voca; // word
string str;
int n, m;

bool compare(string a, string b) {
	if (wordMap[a] != wordMap[b])
		return wordMap[a] > wordMap[b]; 

	if (a.size() != b.size())
		return a.size() > b.size();    

	return a < b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str.length() < m)
			continue;

		if (wordMap.find(str) == wordMap.end()) 
			voca.push_back(str);
		wordMap[str]++;
	}
	sort(voca.begin(), voca.end(), compare);

	for (int i = 0; i < voca.size(); i++)
		cout << voca[i] << '\n';
	
	return 0;
}