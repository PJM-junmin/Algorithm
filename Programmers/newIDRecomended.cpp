#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

/*
  kakao ID ��Ģ�� ���� �ʴ� ���̵� �Է����� ��, �Էµ� ID�� �����ϸ鼭 ��Ģ�� �´� ID�� ��õ���ִ� ���α׷�
  3 <= ID.legth() <= 15
  ID ( characters, number, -, _, .)
  but .�� ó���� ���� ��� X

  #1. ����ǥ���� O
  #2. ����ǥ���� X
*/

// �ҹ��ڷ� ġȯ(tolower)

// ����ǥ���� X
string solution(string new_id)
{
	string answer = "";
	// 1
	for (char& ch : new_id) // reference�� ���;���
		ch = tolower(ch);
	//cout << new_id;

	// 2
	for (char ch : new_id)
		if (isalpha(ch) ||
			isdigit(ch) ||
			strchr("-_.", ch))
			answer += ch;
	// 3
	int idx = -1;
	while ((idx = answer.find("..")) != -1)
		answer.replace(idx, 2, ".");

	// 4
	if (answer.front() == '.')
		answer = answer.substr(1);
	if (answer.back() == '.')
		answer = answer.substr(0, answer.length() - 1);

	// 5
	if (answer.empty())
		answer = "a";

	// 6
	if (answer.size() > 15) {
		answer = answer.substr(0, 15);
		if (answer.back() == '.')
			answer.pop_back();
	}
		
	// 7
	while (answer.size() < 3)
		answer += answer.back();

	return answer;
}

// ����ǥ���� O, regex_replace ���(string, From, To)
string solution2(string new_id)
{
	string answer = "";

	// 1
	for (char& ch : new_id)
		ch = tolower(ch);

	// 2
	answer = regex_replace(new_id,regex("[^a-z0-9-_."), "");

	// 3
	answer = regex_replace(answer, regex("\\.+"), ".");

	// 4
	answer = regex_replace(answer, regex("^\\."), "");
	answer = regex_replace(answer, regex("\\.$"), "");

	// 5
	if (answer.empty())
		answer = "a";
	
	// 6
	if (answer.size() > 15) {
		answer = answer.substr(0, 15);
		answer = regex_replace(answer, regex("[.]$"), "");
	}

	// 7
	while (answer.size() < 3)
		answer += answer.back();

	return answer;
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution("...!@BaT#*..y.abcdefghijklm");
	cout << solution2("...!@BaT#*..y.abcdefghijklm");

	return 0;
}
