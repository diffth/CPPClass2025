#pragma once
#include "Car.h"

class Sedan : public Car
{
public:
	int seat = 0;

public:
	Sedan()
	{
		cout << "Sedan의 디폴트 생성자 호출" << endl;
	}
	Sedan(int i_weight, int i_seat)
	{
		//weight = i_weight;
		seat = i_seat;
		cout << "Sedan의 생성자 매개변수2 호출" << endl;
	}
	~Sedan()
	{
		cout << "Sedan의 소멸자 호출" << endl;
	}
	void SedanFunction()
	{
		cout << "Sedan의 SedanFunction 호출" << endl;
	}
	virtual void Bell()
	{
		cout << "Sedan 벨을 눌러라 호출" << endl;
	}
};

