#include <iostream>

using namespace std;

int main() {
	
	// p.353, 1�� ����
	int num;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;

	int* p = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}

	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;
	cout << endl;
	

	// p.353, 2�� ����
	int length;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> length;

	string *names = new string[length];
	for (int i = 0; i < length; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> names[i];
	}

	cout << endl;
	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < length; i++)
		cout << "�̸� #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

}