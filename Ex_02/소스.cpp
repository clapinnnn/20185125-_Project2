#include <iostream>
#include <math.h>
#include <time.h>
#include <string>

using namespace std;

inline double cal_volume(double radius = 5) {	//default �μ� ���
	double v = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return v;
}

int main() {
	
	// p.160, 2�� ����
	double radius;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;

	cout << "���� ���Ǵ� " << cal_volume(radius) << endl;
	cout << endl;
	

	// p.162, 9�� ����
	srand(time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int result = dice1 + dice2;

	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "����ڰ� �����ϴ�." << endl;
	else
		cout << "����ڰ� �����ϴ�." << endl;
	cout << endl;
	

	// p.164, 13�� ����
	string pw;
	bool upper = false, lower = false, digit = false;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
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
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;
}