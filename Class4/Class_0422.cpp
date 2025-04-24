#include "Sedan.h"
#include "Suv.h"

//int main()
//{
	//Sedan mySedan;
	//mySedan.Break();
	//mySedan.GasFull(45);
	//cout << mySedan.seat << endl;

	//Suv myCar;
	//myCar.gas;	//x
	//myCar.weight; //x
	//myCar.changeAttr();

	//Car myCar;
	//Suv mySuv;
	//myCar.Break();
	//mySuv.Break();

	//Suv mySuv;
	// Up casting
	//Car* ptr_myCar = &mySuv;
	//Car* ptr_myCar = new Suv;
	//ptr_myCar->Run();
	//자식클래스 멤버변수/함수 접근 x
	//ptr_myCar->changeAttr();
	//mySuv.changeAttr();
	//delete ptr_myCar;

	//Suv mySuv;
	//Car* ptr_myCar = &mySuv;
	//ptr_myCar->Run();
	//ptr_myCar->Break();

	//Down casting
	//Suv* ptr_suv = (Suv*)ptr_myCar;
	//cout << ptr_suv->newdata << endl;

	//Car myCar;
	//Suv mySuv;
	//Car* car_ptr = &mySuv;
	//dynamic_cast<변환타임>(변환대상);
	//Suv* suv_ptr = dynamic_cast<Suv*>(car_ptr);
	//cout << suv_ptr->newdata << endl;

//}