#include "MyFunction.h"
#include <iostream>

using namespace std;

void CheckIncrement()
{
	static int static_B = 0;
	cout << "���� ���� ���� " << ++static_B << endl;
}
