#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	const float A = 88.362,B = 13.397,C = 4.799,D = 5.677;
	float BMR, weight, height, age;
	

	cout << "\t\t ����� ���������� � ������ ��� � ������� ��� ������!" << endl;
	cout << "��� ���(��� ������� ����) = ";
	cin >> weight;

	cout << "��� ���� = ";
	cin >> height;

	cout << "��� ������� = ";
	cin >> age;

	BMR = A + (B * weight) + (C * height) - (D * age);

	float BMRSOJ = BMR * 1.2, BMRUA = BMR * 1.375, BMRSA = BMR * 1.55, BMRAL = BMR * 1.725, BMRSPORT = BMR * 1.9;

	cout << "\n";
	cout << "��� ������� ������ ����� = " << BMRSOJ << "����" << endl;
	cout << "��������� ���������� (������ ���������� ��������, ���� ������� 1-3 ���� � ������) = " << BMRUA << "����" << endl;
	cout << "������� ���������� (������� 3-5 ��� � ������) = " << BMRSA << "����" << endl;
	cout << "�������� ���� (����������� ��������, ������� 6-7 ��� � ������) = " << BMRAL << "����" << endl;
	cout << "���������� � ����, ����������� ������ ��������(6-7 ��� � ������) = " << BMRSPORT << "����" << endl;
	cout << "\n";
	
	cout << "\t\t ���������� ����� ������, �����, ���������"<<endl;

	float belki = weight * 2; cout << "����� = " << belki << endl;
	float jir = weight * 1; cout << "���� = " << jir << endl;

	short uglsoj = (BMRSOJ - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "�������� ��� ������� ������ ����� = " << uglsoj << endl;
	short uglua = (BMRUA - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "�������� ��� ��������� ���������� = " << uglua << endl;
	short uglsa = (BMRSA - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "�������� ��� ������� ���������� = " << uglsa << endl;
	short uglal = (BMRAL - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "�������� ��� �������� ����� = " << uglal << endl;
	short uglsport = (BMRSPORT - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "�������� ��� ����������� = " << uglsport << endl;
	
	cout << "\n";
	cout << "��� ������� ���� ����������� �� ��������� ������� �������-���������" << endl;
	cout << "������ �������! :)" << endl;
	cout << "\nDeveloped by Viktor Iukhlin";
	cout << "\n\n\n\n";

	
	system("pause");



}


