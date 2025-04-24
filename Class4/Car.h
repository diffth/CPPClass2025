#pragma once
#include <iostream>

using namespace std;

// github commit test
class Car
{

//접근지정자 private, protected, public
public:
	//멤버변수 정의/초기화
	string name = "SONATA";
	const int max = 4;
	//정적 멤버변수 초기화x
	static int countCar;

protected:
	float gas = 100;

private:
	float weight = 1500;

public:
	//멤버함수 선언, method
	Car();	//생성자
	Car(string i_name)
	{
		name = i_name;
		cout << name << "... 생성됨..." << endl;
	}
	//Car(int max_t)
	Car(int max_t) : max(max_t)
	{
		cout << "max : " << max << endl;
	}
	Car(float gas, int max);
	Car(float i_weight, float i_gas, int i_max):weight(i_weight), gas(i_gas), max(i_max)
	{
		/*
		this->weight = weight;
		this->gas = gas;
		this->max = max;
		*/
		//weight = i_weight;
		//gas = i_gas;
		//max = i_max;
		cout << weight << " : " << i_weight << endl;
		cout << "초기화 생성자 호출" << endl;
	}
	Car(string i_name, float i_weight, float i_gas, int i_max) : name(i_name), weight(i_weight), gas(i_gas), max(i_max)
	{
		cout << name << " : " << i_name << endl;
		cout << "매개변수 4 초기화 생성자 호출" << endl;
	}
	~Car();	//소멸자
	virtual void Break();

	//순수가상함수 > x
	virtual void Bell() {

	};

	void Run();
	int GetMax();
	void GasFull(int);

	void setGas(float i_gas)
	{
		gas = i_gas;
		cout << gas << endl;
	}

	float GetWeight()
	{
		return weight;
	}

};

