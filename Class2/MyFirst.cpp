#include "MyFirst.h"
#include <iostream>

using namespace std;

extern int global_A;

int F::Sum(int a, int b)
{
	cout << "F ������ Sum �Լ� ����" << endl;
	return a + b;
}

void F::PrintVariable(int arg1)
{
	//local_A != arg1
	arg1++;
	global_A++;
	cout << "�Ű����� arg1 : " << arg1 << endl;
	cout << "�������� global_A : " << global_A << endl;
}


