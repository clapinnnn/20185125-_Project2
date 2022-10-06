#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	// p.115, 1번 문제
	string string1, string2;

	cout << "첫 번째 문자열: ";
	cin >> string1;

	cout << "두 번째 문자열: ";
	cin >> string2;

	if (string1.compare(string2))
		cout << "2개의 문자열은 다릅니다." << endl;
	else
		cout << "2개의 문자열은 같습니다." << endl;
	cout << endl;

	
	// p.117, 10번 문제
	for (int a = 1; a <= 100; a++) 
		for (int b = 1; b <= 100; b++) 
			for (int c = 1; c <= 100; c++) 
				if (a * a + b * b == c * c)
					cout << a << " " << b << " " << c << endl;
	cout << endl;

	
	// p.119, 16번 문제
	int cash, bets, win;
	bool result;
	int total = 0;
	int wins = 0;

	srand(time(NULL));

	cout << "초기 금액 $50" << endl;
	cout << "목표 금액 $250" << endl;

	for (int game = 0; game < 1000; game++) {
		cash = 50;
		bets = 0;
		win = 0;

		while (true) {
			bets++;
			if ((double)rand() / RAND_MAX < 0.5) {
				cash++;
				win++;
			}
			else cash--;

			if (cash <= 0) {
				result = false;
				break;
			}
			if (cash >= 250) {
				result = true;
				break;
			}
		}
		if (result == true)
			wins++;
		total += bets;
	}

	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;
	cout << endl;