#include <iostream>

using namespace std;

void dynamicAllocate();

/*
int main()
{
	//int a = 10;
	//cout << a << endl;
	//cout << &a << endl;
	//cout << *&a << endl;

	//int num = 5;
	//int* ptr = &num;
	////int *ptr = &num;
	//cout << "num �� : " << *ptr << endl;
	//*ptr = 10;
	//cout << "num �� : " << *ptr << endl;

	//�ּ� ������(&) == ����������
	//���� ������(*)
	int num1 = 1234;
	float num2 = 3.14;

	int* ptr_num1 = &num1;
	float* ptr_num2 = &num2;

	cout << "ptr_num1 ������ ũ�� : " << sizeof(ptr_num1) << endl;
	cout << "������ ptr_num1 �� ����Ű�� �ּҰ� : " << ptr_num1 << endl;
	cout << "������ ptr_num1 �� ����Ű�� �ּҿ� ����� �� : " << *ptr_num1 << endl;
	cout << "ptr_num2 ������ ũ�� : " << sizeof(ptr_num2) << endl;
	cout << "������ ptr_num2 �� ����Ű�� �ּҰ� : " << ptr_num2 << endl;
	cout << "������ ptr_num2 �� ����Ű�� �ּҿ� ����� �� : " << *ptr_num2 << endl;

	//int a = 2;
	//int b = 5;
	//int* ptr_a = &a;
	//int* ptr_b = &b;

	//int c = *(ptr_a) + *(ptr_b);
	//int c = *ptr_a + *ptr_b;
	//cout << c << endl;

	char MyChar = 'a';
	char* ptr_MyChar = &MyChar;
	int MyInt = 10;
	int* ptr_MyInt = &MyInt;

	cout << MyChar << endl;
	cout << *ptr_MyChar << endl;
	cout << ptr_MyChar << endl;
	cout << &MyChar << endl;

	cout << MyInt << endl;
	cout << *ptr_MyInt << endl;
	cout << ptr_MyInt << endl;
	cout << &MyInt << endl;

	char* ptr1;
	int* ptr2;
	double* ptr3;
	cout << "char�� �������� ũ�� :	  " << sizeof(ptr1) << endl;
	cout << "int�� �������� ũ�� :	  " << sizeof(ptr2) << endl;
	cout << "double�� �������� ũ�� : " << sizeof(ptr3) << endl;

	float length = 10.53;
	float* ptr = &length;
	float** pptr = &ptr;

	cout << "ptr �� ����Ű�� �ּҰ� (&length) " << ptr << endl;
	cout << "pptr�� ����Ű�� �ּҰ� (&ptr)	  " << pptr << endl;
	cout << "ptr �� ����Ű�� �ּҿ� ���尪 (*ptr)  " << *ptr << endl;
	cout << "pptr�� ����Ű�� �ּҿ� ���尪 (*pptr) " << *pptr << endl;

	int value = 10;
	int* p = &value;
	int** pp = &p;

	//[value] = 10
	//[p] = �ּ� of value
	//[pp] = �ּ� of p

	int arr[] = { 1,2,3 };
	int* ptr_arr = arr;
	cout << "�迭�� ũ��� : " << sizeof(arr) << endl;
	cout << "�迭 �������� ũ��� : " << sizeof(ptr_arr) << endl;

	int a = 1, b = 2, c = 0;
	int* arr_ptr[3];
	arr_ptr[0] = &a;
	arr_ptr[1] = &b;
	arr_ptr[2] = &c;
	cout << arr_ptr[0] << " " << *arr_ptr[0] << endl;
	cout << arr_ptr[1] << " " << *arr_ptr[1] << endl;
	cout << arr_ptr[2] << " " << *arr_ptr[2] << endl;

	*arr_ptr[0] = 0;
	*arr_ptr[1] = 0;
	*arr_ptr[2] = 0;
	cout << arr_ptr[0] << " " << *arr_ptr[0] << endl;
	cout << arr_ptr[1] << " " << *arr_ptr[1] << endl;
	cout << arr_ptr[2] << " " << *arr_ptr[2] << endl;

	int arr1[3] = { 1,2,3 };
	int* arr_ptr1[3];
	for (int i = 0; i < 3; ++i)
	{
		arr_ptr1[i] = &arr1[i];
	}
	cout << "������ �迭ũ�� : " << sizeof(arr_ptr1) << endl;
	cout << "�迭ũ��:" << sizeof(arr1) << endl;

	double arr2[3] = { 1,2,3 };
	double* arr_ptr2[3];
	for (int i = 0; i < 3; ++i)
	{
		arr_ptr2[i] = &arr2[i];
	}
	cout << "������ �迭ũ�� : " << sizeof(arr_ptr2) << endl;
	cout << "�迭ũ��:" << sizeof(arr2) << endl;

	int* ptr_dynamic = new int(5);
	cout << "new : " << *ptr_dynamic << endl;
	delete(ptr_dynamic);
	dynamicAllocate();
	//cout << "delete : " << *ptr_dynamic << endl;
}
*/

void dynamicAllocate()
{
	int* localPtr_dynamic = new int(10);
	cout << "new : " << *localPtr_dynamic << endl;
	delete(localPtr_dynamic);
	//cout << "new : " << *localPtr_dynamic << endl;
}