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
			cout << i << "�� Ŀ�� ���" << endl;
		}
		else if (water < 100 && cmix >= 10)
		{
			cout << "���� ����" << endl;
		}
		else if (cmix < 10 && water >= 100)
		{
			cout << "Ŀ�ǹͽ��� ����" << endl;
		}
		else
		{
			cout << "��, Ŀ�ǹͽ� �Ѵ� ����" << endl;
		}
	}
	else
	{
		cout << "�ƹ��͵� ����" << endl;
	}
}

bool isCoin()
{
	return true;
}
