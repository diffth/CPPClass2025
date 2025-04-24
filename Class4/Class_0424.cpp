#include "Car.h"
#include "Suv.h"
#include "Sedan.h"

//객체생성x 초기화
int Car::countCar = 0;

int main()
{
	//Car myCar;
	//Suv mySuv;
	//up casting
	//Car* ptr_myCar = &mySuv;
	//myCar.Break();
	//mySuv.Break();
	//ptr_myCar->Break(); //Car Break() 함수호출

	/*
	Car* ptr_myCar1 = new Car;
	Car* ptr_myCar2 = new Suv;
	ptr_myCar1->Break();

	//virtual 가상함수 사용한 오버라이딩
	ptr_myCar2->Break();
	*/

	//Suv mySuv;
	//mySuv.Break();
	//mySuv.Bell();
	//Car myCar;

	//클래스 타입 포인터 배열
	//Car* CarList[3];
	//CarList[0] = new Suv;
	//CarList[1] = new Sedan;
	//CarList[2] = new Suv;

	//for (int i = 0; i < 3; i++)
	//{
	//	CarList[i]->Bell();
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	delete CarList[i];	//동적할당 해제
	//}

	/*
	Car car1;
	Car car2;
	Suv suv1;
	Suv suv2;
	Sedan* ptr_sedan1 = new Sedan;
	Sedan* ptr_sedan2 = new Sedan;

	cout << Car::countCar << endl;
	cout << car1.countCar << endl;
	*/

	Car car1;
	//car1.max = 10; //불가
	Car(10);
	cout << "car1 max : " << car1.max << endl;


}