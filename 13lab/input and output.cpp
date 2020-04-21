//файл input and output.cpp
#include <iostream>;
using namespace std;
void get_XY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << "Введите координаты точки(x y)\n";
	cin >> x >> y;
}
void putB(bool b, float x, float y)
{
	setlocale(LC_ALL, "rus");
	cout << "Точка с координатами " << x<<" "<<y << endl;
	if (b)
	{
		cout << "попала в заданную область" << endl;
	}
	else cout << "не попала в заданную область" << endl;
}
