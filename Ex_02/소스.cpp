#include <iostream>
#include <math.h>
#include <time.h>
#include <string>

using namespace std;

inline double cal_volume(double radius = 5) {	//default 인수 기능
	double v = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return v;
}

int main() {
	
	// p.160, 2번 문제
	double radius;

	cout << "반지름을 입력하시오: ";
	cin >> radius;

	cout << "구의 부피는 " << cal_volume(radius) << endl;
	cout << endl;
	

	// p.162, 9번 문제
	srand(time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int result = dice1 + dice2;

	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "사용자가 졌습니다." << endl;
	else
		cout << "사용자가 비겼습니다." << endl;
	cout << endl;
	

	// p.164, 13번 문제
	string pw;
	bool upper = false, lower = false, digit = false;

	cout << "암호를 입력하시오: ";
	cin >> pw;

	for (auto& c : pw) {
		if (isupper(c))
			upper = true;
		if (islower(c))
			lower = true;
		if (isdigit(c))
			digit = true;
	}

	if (upper && lower && digit)
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;
}