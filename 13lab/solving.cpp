//פאיכ Solving.cpp
#include <iostream>;

bool Resh1(float x, float y)
{
	if (((x * x) + (y * y) <= 1 && -x - y > 1 )|| ((x * x) + (y * y) && x - y > 1) || ((x * x) + (y * y) && y>0))
	{
		return true;
	}
	else 
		return false;
}
bool Resh2(float x, float y)
{
	if ((x * x) + (y * y) <= 1)
	{
		if (-x - y > 1)
		{
			return true;
		}
		
		if (x - y > 1)
		{
			return true;
		}
		;
		if (y > 0)
		{
			return true;
		}
		else return false;
	}
	else return false;
}