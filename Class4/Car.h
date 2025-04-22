#pragma once
#include <iostream>

using namespace std;

// github commit test
class Car
{

//���������� private, protected, public
public:
	//������� ����/�ʱ�ȭ
	string name = "SONATA";
	int max = 4;

protected:
	float gas = 100;

private:
	float weight = 1500;

public:
	//����Լ� ����, method
	Car();	//������
	Car(string i_name)
	{
		name = i_name;
		cout << name << "... ������..." << endl;
	}
	Car(float gas, int max);
	Car(float i_weight, float i_gas, int i_max):weight(i_weight), gas(i_gas), max(i_max)
	{
		//weight = i_weight;
		//gas = i_gas;
		//max = i_max;
		cout << weight << " : " << i_weight << endl;
		cout << "�ʱ�ȭ ������ ȣ��" << endl;
	}
	Car(string i_name, float i_weight, float i_gas, int i_max) : name(i_name), weight(i_weight), gas(i_gas), max(i_max)
	{
		cout << name << " : " << i_name << endl;
		cout << "�Ű����� 4 �ʱ�ȭ ������ ȣ��" << endl;
	}
	virtual ~Car();	//�Ҹ���
	void Break();
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

