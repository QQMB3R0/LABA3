#include "setAuto.h"
#include <windows.h>
//�����������
SetAuto::SetAuto()
{
	brand = "";
	series = "";
	numberAuto = "";
	CarBody = 0;
}
// ������� ��������� ������ �� �����
string SetAuto::getBrand()
{
	return this->brand;
}

string SetAuto::getSeries()
{
	return this->series;
}

string SetAuto::getNumberAuto()
{
	return this->numberAuto;
}

int SetAuto::getCarBody()
{
	return this->CarBody;
}
//����������
SetAuto::~SetAuto()
{
	;
}
//�������������
void SetAuto::InitAuto(string _brand, string _series, string _numberAuto, int _CarBody)
{
	this->brand = _brand;
	this->series = _series;
	this->numberAuto = _numberAuto;
	this->CarBody = _CarBody;
}
//��������� ������
void SetAuto::InputAuto()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetAuto Auto;
	printf_s("\n������� ����� ����������(BMW, Mercedes_benz ,Tayota)\n����:");
	cin >> brand;
	printf_s("\n������� ����� ����������(X,I,B-CLASS)\n����:");
	cin >> series;
	printf_s("\n������� ����� ����������(X000XX-XXreg)\n����:");
	cin >> numberAuto;
	printf_s("\n�������� ����� ����������:\n1)����\n2)���������\n3)�����\n4)�������\n��� �����:");
	cin >> CarBody;

}
//����� ������
void SetAuto::OutputAuto()
{
	if ((brand[0] == 0) && (series[0] == 0) && (numberAuto[0] == 0))
	{
		printf_s("\nBrand: �����");
		printf_s("\nSeries: �����");
		printf_s("\nNumber: �����");
	}
	else
	{
		cout << "Brand: " << brand << endl;
		cout << "Series: " << series << endl;
		cout << "Number: " << numberAuto << endl;
		if (CarBody == 1)
		{
			cout << "CarBody: ����" << endl;
		}
		if (CarBody == 2)
		{
			cout << "CarBody: ���������" << endl;
		}if (CarBody == 3)
		{
			cout << "CarBody: �����" << endl;
		}
		if (CarBody == 4)
		{
			cout << "CarBody: �������" << endl;
		}

	}
	printf_s("\n");

}

