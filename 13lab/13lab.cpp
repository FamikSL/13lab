// 13lab.cpp : 
#include <iostream>;
using namespace std;

void get_XY(float& x, float& y);
void putB(bool , float , float );
bool Resh1(float x, float y);
bool Resh2(float x, float y);

int main()
{
	float x, y;
	bool b,d;
	get_XY(x, y);
	d = Resh2(x, y);
	b = Resh1(x, y);
	cout << "Решение 1-ой функцией\n";
	putB(b, x, y);
	cout << endl;
	cout << "Решение 2-ой функцией\n";
	putB(d, x, y);
	system("pause");
	return 0;
}	
