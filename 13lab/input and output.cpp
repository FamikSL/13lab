//���� input and output.cpp
#include <iostream>;
using namespace std;
void get_XY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << "������� ���������� �����(x y)\n";
	cin >> x >> y;
}
void putB(bool b, float x, float y)
{
	setlocale(LC_ALL, "rus");
	cout << "����� � ������������ " << x<<" "<<y << endl;
	if (b)
	{
		cout << "������ � �������� �������" << endl;
	}
	else cout << "�� ������ � �������� �������" << endl;
}
