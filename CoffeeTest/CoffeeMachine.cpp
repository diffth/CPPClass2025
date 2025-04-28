#include <iostream>

using namespace std;

bool isCoin();

int main()
{
	if (isCoin())
	{
		int water = 500, cmix = 50;
		//int water = 500, cmix = 5;
		//int water = 50, cmix = 50;
		//int water = 50, cmix = 5;

		if (water >= 100 && cmix >= 10)
		{
			int i = 0;
			while (i < water/100)
			{
				i++;
			}
			cout << i << "잔 커피 출력" << endl;
		}
		else if (water < 100 && cmix >= 10)
		{
			cout << "물만 부족" << endl;
		}
		else if (cmix < 10 && water >= 100)
		{
			cout << "커피믹스만 부족" << endl;
		}
		else
		{
			cout << "물, 커피믹스 둘다 부족" << endl;
		}
	}
	else
	{
		cout << "아무것도 안함" << endl;
	}
}

bool isCoin()
{
	return true;
}
