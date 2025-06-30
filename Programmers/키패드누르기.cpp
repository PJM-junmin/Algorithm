#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<int> numbers, string hand)
{
	string answer = "";
	int leftHand = 10; // "*" = 10
	int rightHand = 12; // "#" = 12

	for ( int number : numbers)
	{
		if (number == 1 || number == 4 || number == 7)
		{
			answer += 'L';
			leftHand = number;
		}
		else if (number == 3 || number == 6 || number == 9)
		{
			answer += "R";
			rightHand = number;
		}
		else {
			if (number == 0)
				number = 11; // "0" = 10;

			// 3Ä­
			int leftDistance = abs((leftHand - number) / 3) + abs((leftHand - number) % 3);
			int rightDistance = abs((rightHand - number) / 3) + abs((rightHand - number) % 3);

			if (leftDistance < rightDistance)
			{
				answer += 'L';
				leftHand = number;
			}
			else if (leftDistance == rightDistance)
			{
				if (hand == "left")
				{
					answer += 'L';
					leftHand = number;
				}
				else if (hand == "right")
				{
					answer += 'R';
					rightHand = number;
				}
			}
			else
			{
				answer += 'R';
				rightHand = number;
			}
		}
	}

	return answer;
}

string solution£²(vector<int> numbers, string hand)
{
	string answer = "";
	int leftHand = 10; // "*" = 10
	int rightHand = 12; // "#" = 12

	for (int number : numbers)
	{
		if (number == 1 || number == 4 || number == 7)
		{
			answer += 'L';
			leftHand = number;
		}
		else if (number == 3 || number == 6 || number == 9)
		{
			answer += "R";
			rightHand = number;
		}
		else {
			if (number == 0)
				number = 11; // "0" = 10;

			// 3Ä­
			int leftDistance = abs((leftHand - number) / 3) + abs((leftHand - number) % 3);
			int rightDistance = abs((rightHand - number) / 3) + abs((rightHand - number) % 3);

			if (leftDistance < rightDistance)
			{
				answer += 'L';
				leftHand = number;
			}
			else if (leftDistance == rightDistance)
			{
				if (hand == "left")
				{
					answer += 'L';
					leftHand = number;
				}
				else if (hand == "right")
				{
					answer += 'R';
					rightHand = number;
				}
			}
			else
			{
				answer += 'R';
				rightHand = number;
			}
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr = { 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 };
	cout << solution(arr, "right");

	return 0;
}