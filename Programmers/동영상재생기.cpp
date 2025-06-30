#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 10초 전, 10초 후, 건너뛰기

int timeToSecond(const string& time)
{
	int minuts = stoi(time.substr(0, 2));
	int seconds = stoi(time.substr(3, 2));

	return minuts * 60 + seconds;
}

string secondToTime(int second)
{
	int minuts = second / 60;
	int reSeconds  = second % 60;
	string m = (minuts < 10 ? "0" : "") + to_string(minuts);
	string s = (reSeconds < 10 ? "0" : "") + to_string(reSeconds);

	return m + ":" + s;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands)
{
	string answer = "";

	int current = timeToSecond(pos);
	int videoLen = timeToSecond(video_len);
	int start = timeToSecond(op_start);
	int end = timeToSecond(op_end);

	if (current >= start && current < end)
		current = end;

	for (string& command : commands)
	{
		if (command == "next") {
			current += 10;
			if (current > videoLen)
				current = videoLen;
		}
		else if (command == "prev")
		{
			current -= 10;
			if (current < 0)
				current = 0;
		}
		
		// 이동 결과가 오프닝 구간에 들어가면 끝으로 이동
		if (current >= start && current < end)
			current = end;
	}

	return secondToTime(current);
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<string> commands = { "next", "prev" };

	cout << solution("34:33", "13:00", "00:55", "02:55", commands) << endl;

	return 0;
}