#pragma once
#include "Car.h"

class Suv : public Car
{
public:
	int newdata = 5;

public:
	void changeAttr()
	{
		gas = 10;
		//weight = 2000;

		cout << gas << endl;
		//cout << weight << endl;
	}
	void Break()
	{
		cout << "Suv class Break �Լ� ȣ��" << endl;
	}
};

