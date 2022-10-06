#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	// p.115, 1�� ����
	string string1, string2;

	cout << "ù ��° ���ڿ�: ";
	cin >> string1;

	cout << "�� ��° ���ڿ�: ";
	cin >> string2;

	if (string1.compare(string2))
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	cout << endl;

	
	// p.117, 10�� ����
	for (int a = 1; a <= 100; a++) 
		for (int b = 1; b <= 100; b++) 
			for (int c = 1; c <= 100; c++) 
				if (a * a + b * b == c * c)
					cout << a << " " << b << " " << c << endl;
	cout << endl;

	
	// p.119, 16�� ����
	int cash, bets, win;
	bool result;
	int total = 0;
	int wins = 0;

	srand(time(NULL));

	cout << "�ʱ� �ݾ� $50" << endl;
	cout << "��ǥ �ݾ� $250" << endl;

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

	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;
	cout << endl;