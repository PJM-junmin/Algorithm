#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

/*
  kakao ID 규칙에 맞지 않는 아이디를 입력했을 때, 입력된 ID와 유사하면서 규칙에 맞는 ID를 추천해주는 프로그램
  3 <= ID.legth() <= 15
  ID ( characters, number, -, _, .)
  but .는 처음과 끝에 사용 X

  #1. 정규표현식 O
  #2. 정규표현식 X
*/

// 소문자로 치환(tolower)

// 정규표현식 X
string solution(string new_id)
{
	string answer = "";
	// 1
	for (char& ch : new_id) // reference로 들고와야함
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

// 정규표현식 O, regex_replace 사용(string, From, To)
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
