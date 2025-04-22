#include <iostream>
#include "MyFirst.h"
#include "MyFunction.h"

using namespace std;

enum ClassType
{
	CPP		= 5,
	UNREAL	= -1,
	JAVA,
	C_3
};
//ClassType MyClass;
//ClassType MyClass = UNREAL;
ClassType MyCpp(CPP);
ClassType MyUnreal(UNREAL);
ClassType MyJava(JAVA);
ClassType MyC_3(C_3);

struct Info
{
	int age;
	string name;
	float height;
};
Info MyInfo;


int Sum(int n);
int RecursiveSum(int n);
void local();
//void global();

//int j = 500;
static int j = 500;

int global_A = 5; //��������

static int static_A;

/*
int main()
{
	//cout << Sum(10) << endl;
	//cout << RecursiveSum(10) << endl;

	cout << "�������� j : " << ::j << endl;

	int i = 5;
	int j = 10;

	cout << "main() �������� i : " << i << endl;
	cout << "main() �������� j : " << j << endl;
	cout << "�������� j : " << ::j << endl;
	local();
	cout << "�������� j : " << ::j << endl;

	//int local_A = 0; //��������
	//cout << local_A << endl;
	//cout << global_A << endl;

	//F::PrintVariable(local_A);
	//cout << local_A << endl;
	//cout << global_A << endl;

	cout << "�ܺ� ���� ���� " << static_A << endl;
	CheckIncrement();
	CheckIncrement();
	CheckIncrement();

	static_A++;
	cout << "�ܺ� ���� ���� " << static_A << endl;

	//ClassType MyClass = CPP;
	//ClassType MyClass = UNREAL;

	cout << MyCpp << endl;
	cout << MyUnreal << endl;
	cout << MyJava << endl;
	cout << MyC_3 << endl;

	MyInfo.age = 19;
	MyInfo.name = "OHS";
	MyInfo.height = 179.5;

	cout << "���̸� �Է� : ";
	cin >> MyInfo.age;
	cout << "�̸��� �Է� : ";
	cin >> MyInfo.name;
	cout << "Ű�� �Է� : ";
	cin >> MyInfo.height;

	cout << MyInfo.age << endl;
	cout << MyInfo.name << endl;
	cout << MyInfo.height << endl;

	int arr[5];
	int arr1[5] = { 1, 5, 3, 4, 6 };
	int arr2[] = { 1, 5, 3, 4, 6 };
	int arr3[5] = { 0, };

	//cout << arr1[0] << endl;
	//cout << arr2 << endl;
	//cout << arr3[4] << endl;

	//cout << sizeof(arr3) /sizeof(int) << endl;
	//cout << sizeof(arr3) /sizeof(arr3[0]) << endl;
	//int arrLength = sizeof(arr3) / sizeof(arr3[0]);
	////cout << arrLength << endl;
	//for (int i = 0; i < arrLength; i++)
	//{
	//	//cout << arr1[i] << endl;
	//	cout << arr3[i] << "  ";
	//}
	//cout << endl;

	char str1[6] = { 'H', 'e', 'l', 'l', 'o', '\n' };
	char str2[9] = "hello";

	int strLength1 = sizeof(str1) / sizeof(str1[0]);
	int strLength2 = sizeof(str2) / sizeof(str2[0]);

	cout << strLength1 << endl;
	for (int i = 0; i < strLength1; i++)
	{
		cout << str1[i] << "  ";
	}
	cout << endl;
	cout << strLength2 << endl;
	for (int i = 0; i < strLength2; i++)
	{
		cout << str2[i] << "  ";
	}
	cout << endl;
}
*/

int Sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}

int RecursiveSum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	cout << "n �� : " << n << endl;
	return n + RecursiveSum(n-1);
	//RecursiveSum(10) + RecursiveSum(9) + RecursiveSum(8) ... + RecursiveSum(1)
	//10 + 9 + 8 ... + 1

}

void local()
{
	int j = 20;
	cout << "local() �������� j : " << j << endl;
}
