#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int solution(int n, int w, int num)
{
    int answer = 0;
    int column = 0;

    int h = (n + w - 1) / w; // ≥Ù¿Ã

    vector<vector<int>> v(h, vector<int>(w, -1)); // v[h][w], ∫Ûƒ≠ -1∑Œ √ ±‚»≠

    int boxNumber = 1;

    for (int r = 0; r < h; r++) {
        if (r % 2 == 0) {
            for (int c = 0; c < w && boxNumber <= n; c++) {
                if (boxNumber == num) {
                    column = c;
                }
                v[r][c] = boxNumber++;
            }
        }
        else {
            for (int c = w - 1; c >= 0 && boxNumber <= n; c--) {
                if (boxNumber == num) {
                    column = c;
                }
                v[r][c] = boxNumber++;
            }
        }
    }

    for (int r = 0; r < h; r++) {
        if (v[r][column] < num) continue;
        else answer++;
    }

    return answer;
}

int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution(22, 6, 8) << endl;
	cout << solution(13, 3, 6);

	return 0;
}

// anotherPersonResolution

/*
#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    while(num<=n){answer++;num+=(w-1-(w+num-1)%w)*2+1;}
    return answer;
}
*/